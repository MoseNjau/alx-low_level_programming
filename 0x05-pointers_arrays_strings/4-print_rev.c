#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: first parameter
 *
 * Return: void
 */
void print_rev(char *s)
{
	int mi;

	mi = 0;
	while (s[mi] != '\0')
		mi++;

	mi = mi - 1;
	while (mi >= 0)
	{
		printf("%c", s[mi]);
		mi--;
	}
	putchar('\n');
}
