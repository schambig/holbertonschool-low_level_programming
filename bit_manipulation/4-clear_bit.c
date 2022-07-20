#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: The number to modify, passed by reference
 * @index: The index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	/* if it is out of the range of an unsigned (32-bit), 0 included */
	if (index > 31)
		return (-1);

	/* create a mask with the set_bit */
	mask = 1 << index;
	/* do the logical product (&) between n and ~mask*/
	*n = *n & ~(mask);

	return (1);
}
