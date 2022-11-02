#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 *
 *
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	int nb = 0;
	char  *x;
	char *separator = ", ";

	va_start(list, format);

	while (format[nb])
	{
		nb++;
	}

	while (format[i])
	{
		if (i == nb - 1)
			separator = "";
	/* only 2 if, no more while loop, initialize x as va_arg */
		i++;
	}
	va_end(list);
	printf("\n");
}

