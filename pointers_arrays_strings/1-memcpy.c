#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: The memory area destination
 * @src: The memory area source
 * @n: The number of bytes to copy
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
