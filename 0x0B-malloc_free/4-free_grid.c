#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid.
 * @height: The number of rows in the grid.
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
