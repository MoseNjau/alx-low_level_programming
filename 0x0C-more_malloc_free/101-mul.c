#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * isNumber - if number is digit
 * @str: string passed
 * Return: one for value
 */

int isNumber(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * productNumbers - give out product of two numbers
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 * Return: The product of num1 and num2.
 */

int productNumbers(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	char *string1;
	char *string2;
	int number1;
	int number2;
	int outcome;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	string1 = argv[1];
	string2 = argv[2];

	if (!isNumber(string1) && !isNumber(string2))
	{
		printf("Error\n");
		return (98);
	}
	number1 = strtoull(string1, NULL, 10);
	number2 = strtoull(string2, NULL, 10);

	outcome = productNumbers(number1, number2);
	printf("%d\n", outcome);
	return (0);
}
