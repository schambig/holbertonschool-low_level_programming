#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: 1
 */

int main(void)
/**
 *{
 *	fprintf(stderr
 *		, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
 *	return (1);
 *}
 */

/* This option is better */
{
	write(2
		, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
