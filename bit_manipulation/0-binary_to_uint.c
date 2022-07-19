#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: A string of 0 and 1 chars
 * Return: The converted number, or 0 if:
 *		there is one or more chars in the string b that is not 0 or 1
 *		b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = strlen(b);
	int i = 0;
	int total = 0, pow2 = 1;

	if (b == NULL)
		return (0);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
				total += pow2;
			pow2 *= 2;
		}
		else
			return (0);
	}
	return (total);
}
