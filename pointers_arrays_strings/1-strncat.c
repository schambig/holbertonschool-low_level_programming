#include "main.h"
#include <string.h>
/**
 * _strncat - Concatenates two strings
 * @dest: Destination buffer
 * @src: String to append
 * @n: The bytes to use from src
 * Return: Always 0 (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
