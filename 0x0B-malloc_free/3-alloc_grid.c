#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: size of columns
 * @height: size of rows
 * Return: a pointer to an array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **block;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	block = (int **)malloc(height * sizeof(int *));
	if (block == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		block[i] = (int *)malloc(width * sizeof(int));
		if (block[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(block[j]);
			}
			free(block);
		}
		for (j = 0; j < width; j++)
		{
			block[i][j] = 0;
		}
	}
	return (block);
}
