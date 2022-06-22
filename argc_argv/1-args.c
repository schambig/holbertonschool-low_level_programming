#include "main.h"
#include <stdio.h>
/**
 * main - Prints the number of arguments passed into it
 * @argc: The size of the argv array
 * @argv: An array of size argc
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*char *argv[] __attribute__((unused)) in the parameter list also works*/
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
