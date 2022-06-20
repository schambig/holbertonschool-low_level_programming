#include "main.h"
#define NULL '\0'
/**
 * _strstr - Locates a substring
 * @haystack: The string to check
 * @needle: The string to find
 * Return: A pointer to the begining of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	for (len = 0; needle[len] != '\0'; len++)
		;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == *needle)
		{
			for (j = 0; (haystack[i + j] == needle[j]) && haystack[i + j] != '\0'; j++)
				continue;
			if (j == len)
				return (haystack + i);
		}
	}
	if (len == 0)
		return (haystack);
	return (NULL);
}
