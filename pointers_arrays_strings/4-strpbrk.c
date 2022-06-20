#include "main.h"
#define NULL '\0'
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to check
 * @accept: The string to compare
 * Return: A pointer to the byte that matches
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (NULL);
}
