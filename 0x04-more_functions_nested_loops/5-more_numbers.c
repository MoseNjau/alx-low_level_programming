#include "main.h"
/**
 * more_numbers - prints 01234567891011121314\n x10
 *
 * Return: void
 */


void more_numbers(void)
{
	char m, n, r, i;

	for (i = 0; i < 10; i++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r < 10)
				n = r;
			else
			{
				m = r / 10;
				n = r % 10;
				_putchar('0' + m);
			}
			_putchar('0' + n);
		}
		_putchar('\n');
	}
}
