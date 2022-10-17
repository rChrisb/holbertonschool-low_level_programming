#include "main.h"

/**
 * main - entry point
 * @argc: 1st param
 * @argv: second param
 *
 * Return: 0
 */

int mul(int x, int y);

int main(int argc, char *argv[])
{
	int i;

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	
	if (*argv[1] == '\0')
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i <= argc - 1; i++)
		{	mul(a, b);
		}
		
		printf("%d\n", mul(a, b));
	}
	return (0);
}


/**
 * mul - multiplies two integers
 * @x: param
 * @y: param
 *
 * Return: x*y
 */
int mul(int x, int y)
{
	int resul = x * y;

	return (resul);
}
