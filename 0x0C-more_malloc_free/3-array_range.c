#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum interger
 * @max: maximum interger used
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
