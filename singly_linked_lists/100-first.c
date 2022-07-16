#include <stdio.h>

/**
 * print_before_main - Function that executes before main
 */

/* execute after main using: __attribute__ ((destructor)) */
void __attribute__ ((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
