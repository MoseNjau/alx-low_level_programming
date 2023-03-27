#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elemnts of an array
 * of integer
 *
 * @a: array
 * @n: second parameter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int mi;

	for (mi = 0; mi < n; mi++)
	{
		printf("%d", a[mi]);
		if (mi != n - 1)
			printf(", ");
	}
	printf("\n");
}
