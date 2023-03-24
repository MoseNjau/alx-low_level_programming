#include "main.h"

/**
 * print_most_numbers - prints 01356789\n
 *
 * Return: void
 */


void print_most_numbers(void)
{
	char mi;

	for (mi = '0'; mi <= '9'; mi++)
	{
		if (!(mi == '2' || mi == '4'))
			_putchar(mi);
	}
	_putchar('\n');
}
