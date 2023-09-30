#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two numbers
 * @argc: command line arguments
 * @argv: An array of command line arguments
 * Return: 0 if successful, 1 if there are not enough arguments
 */
int main(int argc, char *argv[])
{
	int num1;

	int num2;

	int answer;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	answer = num1 * num2;
	printf("%d\n", answer);
	return (0);
}
