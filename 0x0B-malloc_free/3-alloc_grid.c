#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns
 * a pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer.
 */

int **alloc_grid(int width, int height)
{
	int **p1 = NULL;
	int f, c, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	p1 = malloc(sizeof(int *) * height);

	if (p1 == NULL)
		return (NULL);

	for (f = 0; f < height; f++)
	{
		p1[f] = malloc(sizeof(int) * width);
		if (p1[f] == NULL)
		{
			for (k = 0; k < f; k++)
			{
				free(p1[k]);
			}
			free(p1);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
	{
		for (c = 0; c < width; c++)
		{
			p1[f][c] = 0;
		}
	}

	return (p1);
}
