#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: void
 */

void times_table(void)
{
	int i, j, x, d, u;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			x = (i * j);
			d = (x / 10);
			u = (x % 10);
			if (x < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + u);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + d);
				_putchar('0' + u);
			}
		}
		_putchar('\n');
	}
}
