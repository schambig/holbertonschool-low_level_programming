#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @i: The integer to be checked
 * Return: Always 0
 */

int _abs(int i)
{
	if (i <= 0)
	{
		if (i == 0)
		{
			return (i);
		}
		else
		{
			return (i * -1);
		}
	}
	else
	{
		return (i);
	}
}
