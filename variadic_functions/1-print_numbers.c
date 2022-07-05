#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print numbers through a variadic function
 * @separator: The string to be printed between numbers
 * @n: Number of the variadic arguments
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%s", (separator && i < n - 1) ? separator : "");
	}
	va_end(ap);
	printf("\n");
}
