#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string between numbers
 * @n: number of parameters to be printed
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;


	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (i < n - 1 && sparator)
			printf("%s", separator);

	}
	va_end(list);
	printf("\n");

}
