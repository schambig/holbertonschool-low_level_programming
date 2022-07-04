#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Print a name using a function pointer
 * @name: The name to print
 * @f: Pointer to a function (callback)
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
/* f is a callback function to be called by print_name */
{
	if (f == NULL)
		return;
	f(name);
}
