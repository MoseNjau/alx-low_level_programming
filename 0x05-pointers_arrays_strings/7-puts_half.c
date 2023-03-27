#include "main.h"

/**
 * puts_half - prints half of the string
 *
 * @str: first parameter
 *
 * Return; void
 */
void puts_half(char *str)
{
	int m, n;

	m = 0;
	while (str[m] != '\0')
		m++;

	n = m / 2;
	if (m % 2 == 1)
		n += 1;

	for (; n < m; n++)
		_putchar(str[n]);
	_putchar('\n');
}
