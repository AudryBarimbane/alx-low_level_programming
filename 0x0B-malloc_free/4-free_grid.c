#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free 2 dim array
 * @grid: a grid
 * @height: height grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
