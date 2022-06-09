#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: The integer to be checked
 * Return: Last digit of a number
 */

int print_last_digit(int i)
{
	int ld;

	ld = (i % 10);
	if (ld >= 0)
	{
		_putchar('0' + ld);
		return (ld);
	}
	else
	{
		_putchar('0' + (ld * -1));
		return (ld * -1);
	}
}
