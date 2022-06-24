#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Copy a given string and returns a pointer to its address
 * @str: The pointer to the string to copy
 * Return: A pointer to the duplicate string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, len;
	
	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}

