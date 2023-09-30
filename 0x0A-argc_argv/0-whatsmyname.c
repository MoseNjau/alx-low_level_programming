#include <stdio.h>

/**
 * main -print new name
 * @argc: count of command line args
 * @argv: An array of command line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
