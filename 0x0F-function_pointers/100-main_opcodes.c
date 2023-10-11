#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * print_opcodes - Print opcodes as specified
 * @opcodes: Array of opcodes
 * @count: Number of opcodes to print
 */
void print_opcodes(unsigned char *opcodes, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		printf("%02x", opcodes[i]);
		if (i < count - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Array of command-line arguments
 * Return: 0 on success, 1 for incorrect argument count, 2 for negative bytes,
 * 3 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char command[100];

	snprintf(command, sizeof(command), 
			"objdump -d -j.text -M intel %s | grep '<main>:' -A %d",
		       	argv[0], num_bytes);

	FILE *pipe = popen(command, "r");
	if (pipe == NULL)
	{
		perror("popen");
		return (3);
	}

	char line[100];
	unsigned char opcodes[200];

	size_t opcode_count = 0;
	while (fgets(line, sizeof(line), pipe) != NULL)
	{
		char *token = strtok(line, ":");
		if (token != NULL)
		{
			while ((token = strtok(NULL, " \t")))
			{
				if (opcode_count < num_bytes)
				{
					sscanf(token, "%02x", &opcodes[opcode_count]);
					opcode_count++;
				}
			}
		}
	}

	print_opcodes(opcodes, opcode_count);
	pclose(pipe);

	return (0);
}
