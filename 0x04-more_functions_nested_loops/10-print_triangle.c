#include "main.h"

/**
 * print_triangle - prints a triangle of size size
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
int d, g;
if (size <= 0)
_putchar('\n');
for (d = 1; d <= size; d++)
{
for (g = 1; g <= size; g++)
{
if (g <= (size - d))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
