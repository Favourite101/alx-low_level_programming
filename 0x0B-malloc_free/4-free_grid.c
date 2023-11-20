#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees array
 * @grid: array to be freed
 * @height: height of array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = height; i >= 0; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
