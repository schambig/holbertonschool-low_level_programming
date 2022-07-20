#include "main.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The number to parse
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned int digit = 0, j = 0;
	/* copy the value of n in a new variable to not modify it */
	unsigned long int num = n;

	/* get the number of digits used to express n in binary */
	for (digit = 0; num; digit++)
		num = num >> 1;

	/* do logical product '&' and print 1 or 0 */
	for (j = digit - 1; j > 0 && n; j--)
		_putchar(((n >> j) & 1) + '0');
	_putchar(((n >> j) & 1) + '0');
}
