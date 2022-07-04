#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a function given as a parameter
 * @array: The array of elements to use
 * @size: The size of the array
 * @action: Pointer to callback functions
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
/* action is a callback function to be called by array_iterator */
{
	unsigned int i = 0;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
