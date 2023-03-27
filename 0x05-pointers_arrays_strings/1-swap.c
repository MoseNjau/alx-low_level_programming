#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int mi;

	mi = *a;
	*a = *b;
	*b = mi;
}
