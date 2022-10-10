#include "main.h"

/**
 * print_rev - prints reverse of string
 * @s: parameter
 *
 */


void print_rev(char *s)
{
	int count = 0;
	int i;

	count = strlen(s);

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
