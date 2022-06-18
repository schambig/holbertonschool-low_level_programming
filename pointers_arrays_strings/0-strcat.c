#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings
 * @dest: Destination buffer
 * @src: String to append
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int lend = strlen(dest);
	int lens = strlen(src);
	int i;

	for (i = 0; i < lens && src[i] != '\0'; i++)
		dest[lend + i] = src[i];
	dest[lend + i] = '\0';
	return (dest);
}
