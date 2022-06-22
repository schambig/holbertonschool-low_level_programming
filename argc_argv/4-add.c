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
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
