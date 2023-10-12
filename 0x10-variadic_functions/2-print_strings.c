#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings with a specified separator.
 * @separator: The string to be printed between strings (or NULL
 * for no separator).
 * @n: The number of strings passed to the function.
 * @...: The list of strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
