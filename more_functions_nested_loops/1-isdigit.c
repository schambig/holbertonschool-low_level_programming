#include "main.h"
/**
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The parameter to check
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
