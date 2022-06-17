#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_array - Prints n elements of an array of integers
 * @a: The array to check
 * @n: The elements to print
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", *(a + i));
		printf("%d\n", *(a + n - 1));
	}
	putchar('\n');
}
