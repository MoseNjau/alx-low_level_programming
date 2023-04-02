#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int d, f;

	for (d = 0; d <= 9; d++)
	{
		if (d <= s)
			printf("%02x", c[l * 10 + d]);
		else
			printf("  ");
		if (d % 2)
			putchar(' ');
	}
	for (f = 0; f <= s; f++)
	{
		if (c[l * 10 + f] > 31 && c[l * 10 + f] < 127)
			putchar(c[l * 10 + f]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int r;

	for (r = 0; r <= (size - 1) / 10 && size; r++)
	{
		printf("%08x: ", r * 10);
		if (r < size / 10)
		{
			print_line(b, 9, r);
		}
		else
		{
			print_line(b, size % 10 - 1, r);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
