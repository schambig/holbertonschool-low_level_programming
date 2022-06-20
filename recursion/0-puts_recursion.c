#include "main.h"
/**
 * _puts_recursion - Prints a string, followed by a new line
 * @s: The string to print recursively
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		 _putchar('\n');
}
