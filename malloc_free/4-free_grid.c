#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Free a 2 dimensional grid
 * @grid: The grid to be freed
 * @height: Height of the grid (rows)
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
