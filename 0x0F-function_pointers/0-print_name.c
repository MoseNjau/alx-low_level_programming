#include "main.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: A pointer to the function for printing the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
