#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Copy a given string and returns a pointer to its address
 * @str: The string to copy
 * Return: A pointer to the duplicate string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, j, len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; )
	{
		for (j = 0; j < len; j++)
		{
			s[i] = str[j];
			i++;
		}
		s[i] = '\0';
	}
	return (s);
}
