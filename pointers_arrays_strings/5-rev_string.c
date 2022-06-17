#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: The string to reverse
 */

void rev_string(char *s)
{
	int mid, i, len = 0;
	char tmp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	s = s - len; /*returning s to the begining of the string*/
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1]; /*(len-i-1) gives us the corresponding char at the..*/
		s[len - i - 1] = tmp; /*..end of the string, -1 cos the 0-indexed string*/
	}
}
