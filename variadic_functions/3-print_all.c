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

	if (format == NULL)
		return;

	while (format[nb])
	{
		nb++;
	}

	while (format[i])
	{
		if (i == nb - 1)
			separator = "";
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), separator);
				break;
			case 'i':
				printf("%d%s", va_arg(list, int), separator);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), separator);
				break;
			case 's':
				x = va_arg(list, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s%s", x, separator);
				break;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

