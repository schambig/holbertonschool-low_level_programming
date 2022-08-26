#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array of integers
 * @array: Array to search in
 * @size: Size of the array
 * @value: Value to search for
 * Return: Index where value is located,
 *	   If value is not present in array or if array is NULL, return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array)
		return (-1);
	for (left = 0, right = (int)size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
