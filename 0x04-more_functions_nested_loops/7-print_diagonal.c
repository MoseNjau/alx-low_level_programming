#include "main.h"
/**
 * print_diagonal - prints a diagonal line of length n
 * @n: length of diagonal
 *
 * Return: void
 */
void print_diagonal(int n)
{
int w, z;
if (n <= 0)
_putchar('\n');
for (w = 0; w < n; w++)
{
for (z = 0; z < w; z++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
