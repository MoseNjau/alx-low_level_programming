#include <stdarg.h>
/**
 * sum_them_all - Sums all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters. If n is 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(args, int);

		sum += arg;
	}

	va_end(args);
	return (sum);
}
