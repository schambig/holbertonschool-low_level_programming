#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string
 * @str: The string to check
 */

void puts2(char *str)
{
	size_t i; /*change int to size_t cos strlen gives a long unsigned int*/

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]); /**(s+i) also works*/
	}
	_putchar('\n');
}
