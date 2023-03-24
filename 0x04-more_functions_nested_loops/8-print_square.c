#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: size of square
 *
 * Return: void
 */
void print_square(int size)
{
int u, v;
if (size <= 0)
_putchar('\n');
for (u = 0; u < size; u++)
{
for (v = 0; v < (size); v++)
{
_putchar('#');
}
_putchar('\n');
}
}
