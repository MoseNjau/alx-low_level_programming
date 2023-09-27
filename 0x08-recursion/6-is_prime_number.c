#include "main.h"

/**
 * check_prime - check if is prime
 * @n: number
 * @r: for 0 - n/2
 * Return: 0 or 1
 */
int check_prime(int n, int r)
{
	if (n % r == 0)
		return (0);
	if (r > n / 2)
		return (1);
	return (check_prime(n, r + 1));
}

/**
 * is_prime_number - check if prime
 * @n: number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
