#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Return a pointer to a 2 dimensional array of integers
 * @width: Width of the array (columns)
 * @height: Height of the array (rows)
 * Return: A pointer to a 2 dimensional array of integers,
 * on failure free memory and return NULL
 */

int **alloc_grid(int width, int height)
{
	int **mtx;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	mtx = malloc(sizeof(int *) * height);
	if (!mtx)
	{
		free(mtx);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mtx[i] = malloc(sizeof(int) * width);
		if (!mtx[i])
		{
			for (i = 0; i < height; i++)
				free(mtx[i]);
			free(mtx);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mtx[i][j] = 0;

	}
	return (mtx);
}
