#include "main.h"
/**
 * _strlen - Calculates the length of a given string
 * @s: The parameter to check
 * Return: The length of a string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
