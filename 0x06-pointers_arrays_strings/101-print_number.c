#include "main.h"

/**
 * print_number - Prints any integer with putchar
 * @n: Number to prints
 *
 * Return: Nothing
 */
void print_number(int n)
{
unsigned int r;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	r = n;

	if (r / 10)
	print_number(r / 10);

	_putchar(r % 10 + '0');
}

