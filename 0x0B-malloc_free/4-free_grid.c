#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Write a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: pointer to grid
 * @height: height of the grid
 * Return: none.
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
