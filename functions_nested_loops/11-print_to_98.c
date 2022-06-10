#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The parameter to receive
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		printf("%d, ", i);
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (i = n; i >= 98; i--)
		printf("%d, ", i);
	}
	putchar('\n');
}
