#include "main.h"
#define NULL = '\0';
/**
 * _strchr - Locates a character in a string
 * @s: The string to check
 * @c: The character to locate
 * Return: A pointer to the 1st occurrence of the char c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
