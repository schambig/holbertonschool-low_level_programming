#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc - Allocate memory for an array, using malloc
 * @nmemb: The elements of the array
 * @size: The size (bytes) of each element in nmemb
 * Return: A pointer to the allocated memory,
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *s = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		s[i] = 0;

	return (s);

}
