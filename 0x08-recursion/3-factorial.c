#include "main.h"

/**
 * factorial - returns a factorial of a given number
 * @n: number
 * Return: factorial
 */
int factorial(int n)
{
	int fact;
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	fact = n * factorial(n - 1);
	return (fact);
}
