#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: 1 (Error) if one of the addends is not a number, 0 if success
 */

int main(int argc, char *argv[])
{
	int row, col, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (row = 1; row < argc; row++)
		{
			for (col = 0; argv[row][col] != '\0'; col++)
			{
				if (argv[row][col] < 48 || argv[row][col] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[row]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
