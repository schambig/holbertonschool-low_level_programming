#include "main.h"
/**
 * is_prime_number - Check if the integer is prime
 * @n: The number to check
 * @p: The possible prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int get_prime(int n, int p);
int is_prime_number(int n)
{
	if (n <= 1) /*Three first cases*/
		return (0);
	else
		return (get_prime(n, 2)); /*Calls the rec. func. starting from 2*/
}

/**
 * get_prime - Auxiliar recursive function to find the prime
 * @n: The number to check
 * @p: The possible prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int get_prime(int n, int p)
{
	if (n == p) /*Check if n is prime*/
		return (1);
	else if (n % p == 0) /*Checks if n is divisible by p*/
		return (0);
	else
		return (get_prime(n, p + 1)); /*Increment p*/
}
