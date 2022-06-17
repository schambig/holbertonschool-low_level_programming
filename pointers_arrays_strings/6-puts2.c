#include "main.h"
/**
 * puts2 - Prints every other character of a string
 * @str: The string to check
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) % 2 == 0)
			_putchar(*(str + i));
	/*We could replace *(str + i) to str[i] or a combo of both and also works*/
	}
	_putchar('\n');
}
