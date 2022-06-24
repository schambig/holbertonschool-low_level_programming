#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Concatenate two strings
 * @s1: The string to concatenate
 * @s2: The string to concatenate
 * Return: A pointer to the new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, len1, len2;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for  (i = 0; i < len2; i++)
	{
		s[len1 + i] = s2[i];
	}
	s[len1 + len2] = '\0';
	return (s);
}
