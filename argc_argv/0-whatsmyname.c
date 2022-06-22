#include "main.h"
#include <stdio.h>
/**
 * main - Prints its own name
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*int argc __attribute__((unused)) in the parameter list also works*/
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
