#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initializes everything with 0
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j <= width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
