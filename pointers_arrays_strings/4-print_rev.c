#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
