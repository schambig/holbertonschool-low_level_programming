#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc
 * @b: The parameter to multiply
 * Return: A pointer to the allocated memory,
 */

void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
