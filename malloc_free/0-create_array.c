#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars, and initializes it
 * @size: The size of the array
 * @c: The character to print
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	return (s);
}
