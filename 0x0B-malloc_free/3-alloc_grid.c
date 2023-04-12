#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function that returns a pointer to a 2d array
* @width: self explainatory. the rows.
* @height: probably not the width. the vert
*
* Description: make a width by height grid and then each index should be 0
* Return: the pointer or null if failure
* A: test cases if we get a 0 or negative size. return NULL
* B: we test if the input is too much so we will return null
* C: we need to free the test memory. dont want valgrind on us
* D: we now habve our pointer to pointer, be the size of an int pointer
*multiplied by our height which is how many y- long stuff we want
* E: loop from i to the width or x-long, we will assign
*the pointer at the int pointer index with another malloc
*but now that size is not an int pointer but a just an int
*so we had a straight line vertically down with arrays
*now we willed those v arrays with ints
* F: loop through each index now and insert a 0
* G: return the pointer
* I deleted stuff my comments are screwed i changed stuff also
* D again: I check if height and width can overflow both.
* TLDR: GOTTA FREE UP STARTING FROM THE ROWS, GOING BACKWARDS
*and then finally free up the initial pointer you malloced
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
