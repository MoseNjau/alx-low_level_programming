#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: separates
 * @n: The number of arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *chr;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		chr = va_arg(args, char*);
		if (chr)
			printf("%s", chr);
		else
			printf("(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
