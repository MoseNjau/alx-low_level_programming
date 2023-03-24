#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*
* Return: void
*/
void print_number(int n)
{
	int cpy, mi, size = 1, onto = n % 10;

	n /= 10;
	cpy = n;
	if (onto < 0)
	{
		onto *= -1, cpy *= -1, n *= -1;
		_putchar('-');
	}
	if (cpy > 0)
	{
		while (cpy / 10 != 0)
		{
			cpy /= 10, size *= 10;
		}
		while (size > 0)
		{
			mi = n / size;
			_putchar('0' + mi);
			n -= mi * size;
			size /= 10;
		}
	}
	_putchar('0' + onto);
}
