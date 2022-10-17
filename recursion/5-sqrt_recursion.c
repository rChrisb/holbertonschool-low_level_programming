#include "main.h"

/**
 * root - search the square number
 * @n: 1st
 * @x: 2nd
 *
 *
 */

int root(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else
		return (root(n, x + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter
 *
 * Return: natural square root of number
 */

int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
