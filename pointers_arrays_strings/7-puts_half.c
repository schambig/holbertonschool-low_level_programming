#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half of a string
 * @str: The string to check
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	char *p;

	if (len % 2 == 0)
	{
		p = &str[len / 2];
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
		p++;
		_putchar('\n');
	}
	else
	{
		p = &str[(len + 1) / 2];
		for (i = (len + 1) / 2; i < len; i++)
			_putchar(str[i]);
		p++;
		_putchar('\n');
	}
}
