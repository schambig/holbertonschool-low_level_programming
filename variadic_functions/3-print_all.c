#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything through a variadic function
 * @format: The list of types of arguments passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0, exist = 0;
	char *str_s = NULL;
	va_list args;

	while (format && format[i])
	{
		va_start(args, format);
		i = 0;
		while (format[i])
		{
			exist = 1;
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str_s = va_arg(args, char *);
					if (str_s == NULL)
						str_s = "(nil)";
					printf("%s", str_s);
					break;
				default:
					exist = 0;
					break;
			}
			i++;
			if (format[i] && exist)
				printf(", ");
		}
		va_end(args);
	}
	printf("\n");
}
