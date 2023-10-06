#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - Frees a 2 dimensional grid previously.
 * @grid: 2D pointer
 * @height: Height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
