#include "3-calc.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 *
 */


/*
 * Initialization of main
 *
 */
int main(int argc, char *argv[])
{
	int x, y, (*func)(int, int);

	x = atoi(argv[1]);
	y = atoi(argv[3]);
/* initialize the function operator, operator is argv[2], use op structure to get function*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
/* why are you looking at my github? there are many others which are also public, go check them*/
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

	printf(/* function of the operation between x and y */);
	return (0);
}

