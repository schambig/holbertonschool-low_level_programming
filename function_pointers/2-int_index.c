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

	/* Checking if array and cmp exist */
	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		/* Iterate inside the array */
		for (i = 0; i < size; i++)
		{
			/* if the condition is true return the index */
			if (cmp(array[i]))
				return (i);
		}
	}
	/* If no element matches, return -1 */
	return (-1);
}
