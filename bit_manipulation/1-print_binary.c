#include "main.h"

/**
 * print_binary - Print the binary representation of a number
 * @n: The number to parse
 * Return: Nothing
 */
int binary_digit_used(unsigned int n);

void print_binary(unsigned long int n)
{
	int bindig = binary_digit_used(n);
	int i = 0, j;

	if (n == 0)
		_putchar('0');

	for (i = bindig - 1; i >= 0; i--)
	{
		j = n >> i;
		if (j & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

/**
 * binary_digit_used - Get the number of binary digits used
 * @n: The number to parse
 * Return: The number of binary digits
 */
int binary_digit_used(unsigned int n)
{
	int count = 0;

	while (n != 0)
	{
		n *= 0.5;
		count++;
	}
	return (count);
}
