#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to check
 * @r: The posible root
 * Return: The natural square root of n, otherwise return -1
 */

int get_root(int n, int r);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (get_root(n, 1));
}

/**
 * get_root - Auxiliar recursive function to find the root
 * @n: The number to check
 * @r: The posible root
 * Return: The root value, otherwise -1
 */

int get_root(int n, int r)
{
	if (r * r > n)
		return (-1);
	else if (r * r == n)
		return (r);
	else
		return (get_root(n, r + 1));
}
