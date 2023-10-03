#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create an array
 * @size: interger used in function
 * @c: variable modified
 *
 * Return: pointer to the created array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
