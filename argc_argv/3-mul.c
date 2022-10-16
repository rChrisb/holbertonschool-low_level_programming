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


	for (i = 1; i <= argc - 1; i++)
	{
		if (argc == 3)
		{	mul(a, b);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", mul(a, b));

	return (0);
}

int mul(int x, int y)
{
	int resul = x * y;

	return (resul);
}
