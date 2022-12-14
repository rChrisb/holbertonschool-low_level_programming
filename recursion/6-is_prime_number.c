#include "main.h"

/**
 * prime - search if n is a prime number
 * @n: 1st
 * @x: 2nd
 *
 * Return: 0, 1, or prime function iterated
 */

int prime(int n, int x)
{
	if (n < 2)
	{
		return (0);
	}
	else if (x >= n / 2)
	{
		return (1);
	}
	else if (!(n % x))
	{
		return (0);
	}
	else
		return (prime(n, x + 1));
}


/**
 * is_prime_number - returns the 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: parameter
 *
 * Return: prime number
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}
