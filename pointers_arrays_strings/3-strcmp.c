#include "main.h"
#include <string.h>
/**
 * _strcmp - Compares two strings
 * @s1: String to compare
 * @s2: String to compare
 * Return: An integer less than, equal to, or greater than zero
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
