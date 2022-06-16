#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int mid, i;
	char *str, tmp;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	str = s; /*give str the value of s, str=s-1 also works*/
	s = s - len; /*returning s to the begining of the string*/
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		tmp = *(s + i);
		*(s + i) = *(str - i - 1); /*just *(str-i) in case we use str=s-1*/
		*(str - i - 1) = tmp;
	}
}
