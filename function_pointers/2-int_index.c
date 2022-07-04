#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer
 * @array: The array of elements to search in
 * @size: The number of elements in the array
 * @cmp: Pointer to callback functions to compare
 * Return: The index of the 1st element for which cmp does not return 0,
 * if no element matches, return -1,
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
/* cmp is a callback function to be called by int_index */
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			cmp(array[i]);
		return (i);
	}
	return (-1);
}
