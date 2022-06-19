#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 * Return: Pointer to string
 */

char *leet(char *s)
{
	char upp[] = {'A', 'E', 'O', 'T', 'L'};
	char low[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upp[j] || s[i] == low[j])
				s[i] = num[j];
		}
	}
	return (s);
}
