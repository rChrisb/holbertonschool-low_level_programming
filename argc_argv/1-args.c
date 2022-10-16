#include "main.h"

/**
 * main - entry point
 * @argc: 1st param
 * @argv: second param
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;

	if (*argv[0] != '\0')
		printf("%d\n", i);

	return (0);
}
