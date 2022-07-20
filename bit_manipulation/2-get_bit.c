#include "main.h"

/**
 * get_bit - Return the value of a bit at a given index
 * @n: The number to parse
 * @index: The index, starting from 0
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_index;

	/* if it is out of the range of an unsigned (32-bit), 0 included */
	if (index > 31)
		return (-1);

	/* right-shift and do the logical product to get the desired bit */
	bit_index = ((n >> index) & 1);

	return (bit_index);
}
