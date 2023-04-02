#include "main.h"
/**
 *reverse_array - Reverse the elements in an array
 *@a: Parameter
 *@n: Parameter
 *Return: array
 */
void reverse_array(int *a, int n)
{
	int d = 0, b;

	n = n - 1;
	while (d < n)
	{
		b = *(a + d);
		*(a + d) = *(a + n);
		*(a + n) = b;
		d++;
		n--;
	}
}
