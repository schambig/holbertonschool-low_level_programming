#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: The product of two numbers
 */

int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc <= 1)
		printf("Error\n");
	else
	{
		for (i = 1; i < argc; i++)
			prod = prod * atoi(argv[i]);
		printf("%d\n", prod);
	}
	return (0);
}
