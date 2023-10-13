#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of a function
 * @func: a pointer to the function
 * @n: number of bytes to print
 *
 * Return: void
 */

void print_opcodes(void *function, int n)
{
	unsigned char *bytes = (unsigned char*)function;
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2x", bytes[i]);
		if (i < n-1)

			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, 1 or 2 on error
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(main, n);

	return (0);
}
