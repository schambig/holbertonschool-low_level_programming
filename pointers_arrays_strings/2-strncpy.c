#include "main.h"
#include <string.h>
/**
 * _strncpy - Copies a string
 * @dest: Destination buffer
 * @src: String to copy
 * @n: The bytes to use from src
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
