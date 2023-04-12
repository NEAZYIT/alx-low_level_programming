#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees up a 2d grid created by script 3
 * @grid: a pointer to a pointer. a 2d array. a grid
 * @height: the height
 *
 * Description: this part should return the all clear from valgrinf
 * Return: none it is void:
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
