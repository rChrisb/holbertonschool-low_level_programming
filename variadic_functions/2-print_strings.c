#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: element between strings
 * @n: number of strings to pbe printed
 *
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	char *x;

	va_start(list, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(list, char *);
		if (!x)
			printf("(nil)");
		else
			printf("%s", x);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}

	va_end(list);
	printf("\n");
}
