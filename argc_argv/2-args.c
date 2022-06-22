#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguments it receives
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
