#include "main.h"

/**
 * print_rev
 * @s: parameter
 *
 */


void print_rev(char *s)
{
	int i;
	n = strlen(*s);

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
