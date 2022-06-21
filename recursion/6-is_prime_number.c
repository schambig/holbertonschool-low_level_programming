#include "main.h"
/**
 * is_prime_number - Check if the integer is prime
 * @n: The number to check
 * @p: The posible prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int get_prime(int n, int p);
int is_prime_number(int n)
{
	if (n <= 1) /*three first cases*/
		return (0);
	else
		return (get_prime(n, 2));
}

/**
 * get_prime - Auxiliar recursive function to find the prime
 * @n: The number to check
 * @p: The posible prime
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int get_prime(int n, int p)
{
	if (n == p)
		return (1);
	else if (n % p == 0)
		return (0);
	else
		return (get_prime(n, p + 1));
}
