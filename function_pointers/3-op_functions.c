#include "3-calc.h"

/**
 * op_add - adds 2 integers
 * @a: first int
 * @b: second int
 * Return: addition of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subs 2 int
 * @a: first int
 * @b: second int
 * Return: substraction between a and b 
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies 2 int
 * @a: first int
 * @b: second int
 * Return: multiplication between a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divides 2 int
 * @a: first int
 * @b: second int
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - returns the remainder of a division between 2 int
 * @a: first int
 * @b:second int
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
