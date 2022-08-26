#include "search_algos.h"

/**
 * real_binary_search - Search for a target in a sorted array of integers
 * @array: Array to search in
 * @left: Left element
 * @right: Right element
 * @target: Value to search for
 * Return: Index where value is located,
 *	   If value is not present in array or if array is NULL, return -1
 */
int real_binary_search(int *array, int left, int right, int target)
{
	int mid = 0, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);


		mid = (left + right) / 2;

		if (array[mid] == target)
			return (mid);

		if (array[mid] < target)
			left = mid + 1;

		else
			right = mid - 1;
	}

	return (-1);
}

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
	return (real_binary_search(array, array[0], array[size - 1], value));
}
