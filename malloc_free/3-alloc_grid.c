#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 * Return: A pointer to a 2 dimensional array of integers, NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
	}
	return (grid);
}
