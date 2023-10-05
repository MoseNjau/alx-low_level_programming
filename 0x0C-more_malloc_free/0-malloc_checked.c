#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: parameter modified
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
	{
		exit(98);
	}
	return (space);
}
