#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: The parameter to be checked
 * Return: 1 if c is lower/uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
