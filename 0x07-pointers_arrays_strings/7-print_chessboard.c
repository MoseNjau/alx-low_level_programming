#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: first parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int g, b;

	for (g = 0; g < 8; g++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[g][b]);
		}
		_putchar('\n');
	}
}
