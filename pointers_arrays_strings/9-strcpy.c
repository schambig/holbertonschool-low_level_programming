#include "main.h"
#include <string.h>
/**
 * *_strcpy - Copies a string from src, to the buffer dest
 * @dest: The destination buffer
 * @src: The source buffer
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int i;

	for (i = 0; i <= len; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
