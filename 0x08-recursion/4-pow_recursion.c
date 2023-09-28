#include "main.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: first parameter
 * @y: second parameter
 * Return: power
 */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	pow = x * _pow_recursion(x, y - 1);
	return (pow);
}
