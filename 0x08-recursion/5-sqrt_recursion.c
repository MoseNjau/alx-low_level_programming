#include "main.h"

/**
 * get_sqrt - find squareroot
 * @n: number
 * @r: assumed number
 * Return: squareroot of a number
 */
int get_sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r > n)
		return (-1);
	return (get_sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - finds the square root
 * @n: number
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (get_sqrt(n, 2));
}
