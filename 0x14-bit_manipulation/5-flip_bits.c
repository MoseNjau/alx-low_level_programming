#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int load, checker;
	unsigned int counter, i;

	counter = 0;
	checker = 1;
	load = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (checker == (load & checker))
			counter++;
		checker <<= 1;
	}
	return (counter);
}