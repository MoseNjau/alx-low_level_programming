#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 *
 * @str: first parameter
 *
 * Return: void
 */
void _puts(char *str)
{
	int mi;

	mi = 0;
	while (str[mi] != '\0')
		mi++;

	fwrite(str, mi, 1, stdout);
	putchar('\n');
}

