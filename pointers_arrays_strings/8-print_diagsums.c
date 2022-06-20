#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals
 * @a: The matrix, casted to integer, to check
 * @size: The size of the matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	sum1 = sum2 = 0;
	for (i = size - 1; i < (size * size) - 1; i += size - 1)
		sum1 += a[i];
	for (; i >= 0; i -= (size + 1))
		sum2 += a[i];
	printf("%d, %d\n", sum2, sum1);
}
