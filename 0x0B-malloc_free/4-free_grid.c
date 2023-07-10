#include "main.h"

/**
 * free_grid - frees a 2D grid
 *
 * @grid: address of grid
 * @height: height of grid
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;
	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
