#include <stdio.h>

/**
 * main -print the number of args
 * @argc: count of command line args
 * @argv: An arrayof command line args
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
