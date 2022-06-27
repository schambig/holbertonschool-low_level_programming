#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Concatenate two strings
 * @s1: The string to be appended
 * @s2: The string to copy n bytes from
 * @n: The bytes to copy from s2
 * Return: A pointer to the allocated memory,
 * if the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, len1 = 0, len2 = 0;
	char *s = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n < len2)
	{
		s = malloc(sizeof(char) * (len1 + n + 1));
		if (s == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < len1; i++)
		{
			s[i] = s1[i];
		}
		for  (i = 0; i < n; i++)
		{
			s[len1 + i] = s2[i];
		}
		s[len1 + n] = '\0';
		return (s);
	}
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
