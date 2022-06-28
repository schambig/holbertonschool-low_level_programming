#include <stdlib.h>
#include "main.h"
/**
 * array_range - Create an array of integers
 * @min: The minimum value to be accounted (included)
 * @max: The maximum value to be accounted (included)
 * Return: A pointer to the allocated memory,
 * If min > max, return NULL
 * If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = min; i < ((max - min) + 1); i++)
		p[i] = i;

	return (p);
}
