#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: pointer to two dimensional array
 * @height: the count of nested arrays
 *
 * Return: void always
 */

void free_grid(int **grid, int height)
{
	int r = 0;

	while (r < height)
	{
		free(grid[r]);
		r++;
	}
	free(grid);
}
