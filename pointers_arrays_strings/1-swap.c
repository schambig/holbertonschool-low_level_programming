#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: The parameter to swap
 * @b: The parameter to swap
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
