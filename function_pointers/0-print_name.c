#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: first parameter
 * @f: second parameter which is a pointer to a function
 *
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}

