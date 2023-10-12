#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers with a specified separator.
 * @separator: The string to be printed between numbers
 * (or NULL for no separator).
 * @n: The number of integers passed to the function.
 * @...: The list of integers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
