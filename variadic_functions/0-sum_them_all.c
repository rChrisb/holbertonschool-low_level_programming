#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters
 * @n: number of parameters to sum
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, total = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		total = total + va_arg(list, unsigned int);
	}
	va_end(list);

	return (total);
}

