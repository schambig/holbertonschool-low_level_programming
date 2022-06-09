#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @i: The integer to be checked
 * Return: Last digit of a number
 */

int print_last_digit(int i)
{
	if ((i % 10) >= 0)
	{
		_putchar('0' + (i % 10));
		return (i % 10);
	}
	else
	{
		_putchar('0' + ((i % 10) * -1));
		return ((i % 10) * -1);
	}
}
