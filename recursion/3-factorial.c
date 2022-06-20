#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: The given number
 * Return: The factorial of n, if n < 0, return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n *  factorial(n - 1));
}
