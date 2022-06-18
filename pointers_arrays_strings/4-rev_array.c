#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integer
 * @a: Array to reverse
 * @n: Number of elements of the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int mid = n / 2;
	int i;
	char tmp;

	for (i = 0; i < mid; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
