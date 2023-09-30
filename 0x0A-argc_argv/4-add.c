#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check string if  positive number
 * @str: The string to be checked
 * Return: 1 if it's a positive number, 0 otherwise
 */
int is_positive_number(char *str)
{
	int i = 0;

	if (str == NULL || str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: command line arguments number
 * @argv: An array of command line arguments
 * Return: 0 if successful, 1 if there are no positive numbers or invalid input
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
