#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Return: 0
 */

int main(ac, **av)
{
	FILE *source, *dest;
	char buf[1024];
	
	int fd = open(dest, O_TRUNC | O_CREAT | O_RDWR, 664);




	

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (source == NULL)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (dest == NULL)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}



	close(fd);

	if (close(fd) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}


	return (0);
}
