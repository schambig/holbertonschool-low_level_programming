#include "main.h"

/**
 * flip_bits - Return the number of bits nedeed to flip
 *		to get from one number to another
 * @n: The number to parse
 * @m: The number to parse
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int count = 0;

	while (xor > 0)
	{
		count++;
		xor = xor & (xor - 1);
	}
	return (count);

}
