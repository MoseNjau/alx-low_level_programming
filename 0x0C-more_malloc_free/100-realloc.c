#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: No return
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int min_size;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	min_size = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < min_size; i++)
	{
		((char *)newptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (newptr);
}
