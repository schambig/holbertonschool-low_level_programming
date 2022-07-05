#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print strings through a variadic function
 * @separator: The string to be printed between numbers
 * @n: Number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s = NULL;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		printf("%s", (s == NULL) ? "(nil)" : s);
		printf("%s", (separator && i < n - 1) ? separator : "");
	}
	va_end(ap);
	printf("\n");
}
