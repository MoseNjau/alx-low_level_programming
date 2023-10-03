#include "main.h"
#include <stdlib.h>
/**
 * free_grid - returns a pointer to a two dimensional array of integers
 * @height: size of rows
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL)
	{
		for (j = 0; j < height; j++)
		{
			if (grid[j] != NULL)
			{
				free(grid[j]);
			}
		}
		free(grid);
	}
}
