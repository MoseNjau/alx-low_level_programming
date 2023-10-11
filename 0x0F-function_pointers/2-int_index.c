#include <stddef.h>

/**
 * int_index - Searches for an integer in an array
 * @array: The array to search
 * @size: The number of elements in the array
 * @cmp: A pointer to the function for comparing values
 *
 * Return: The index of the first element for which the cmp function returns
 * non-zero,
 *         or -1 if no element matches or if size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
