#include "3-calc.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */

int main(int argc, char *argv[])
{
	int x, y, (*func)(int, int);

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (y == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(x, y));	

	return (0);
}
