#include "variadic_functions.h"


/**
 * print_char - Prints characters
 * @args: Arguments to be printed
 * Return: Void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_int - Prints numbers
 * @args: Arguments to be printed
 * Return: Void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}


/**
 * print_flt - Prints floating point numbers
 * @args: Arguments to be printed
 * Return: Void
 */

void print_flt(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
 * print_string - Prints a string
 * @args: Arguments to be printed
 * Return: Void
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints all the valid arguments
 * @format: Placeholders
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;
	char *sep = "";

	str functs[] =  {
		{"c", print_char},
		{"i", print_int},
		{"f", print_flt},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (functs[j].chr)
		{
			if (format[i] == *(functs[j].chr))
			{
				printf("%s", sep);
				functs[j].funct(args);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
