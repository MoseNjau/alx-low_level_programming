#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int mi, k;

	mi = 0;
	while (str[mi] != '\0')
	{
		mi++;
	}
	for (k = 0; k < mi; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
