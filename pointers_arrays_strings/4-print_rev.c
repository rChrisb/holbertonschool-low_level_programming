#include "main.h"

/**
 * print_rev
 * @s: parameter
 *
 */


void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s);
	}
	_putchar('\n');
}
