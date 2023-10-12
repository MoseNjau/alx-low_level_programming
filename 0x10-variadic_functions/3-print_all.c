#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints values based on the format and arguments.
 * @format: The format string indicating the types of arguments to print.
 * @...: The list of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int n = 0;
	const char *separator = ",";
	char *str;

	va_start(args, format);

	while (format && format[n])
	{
		c = format[n];

		if (n > 0)
			printf(", ");

		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(args, double));
			break;
		case 's':
			{
				str = va_arg(args, char *);

				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);

			break;
		default:
			break;
		}
		}
		if (format[n + 1] != '\0' && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		{
			printf("%s", separator);
		}

		n++;
	}
	printf("\n");
	va_end(args);
}
