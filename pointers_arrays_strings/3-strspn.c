#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to check
 * @accept: The string to match
 * Return: Number of bytes that match
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bytes = 0;
	int gobreak;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				bytes++;
				gobreak = 1;
			}
		}
		if (gobreak == 0)
			break;
		gobreak = 0;
	}
	return (bytes);
}
