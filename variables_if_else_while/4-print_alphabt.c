#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}
	}
	putchar(10);
	return (0);
}
