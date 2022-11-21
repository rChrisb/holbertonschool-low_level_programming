#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of arguments
 * @argv: values of arguments
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int source, dest, in, out;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source = open(av[1], O_RDWR);
	dest = open(av[2], O_TRUNC | O_CREAT | O_RDWR, 0664);
	if (source == 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (dest == 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (1)
	{
		in = read(source, buf, 1024);
		if (in == -1)
			break;
		out = write(dest, buf, in);
		if (out == -1)
			break;
	}
	close(source);
	if (close(source) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", source);
		exit(100);
	}
	close(dest);
	if (close(dest) != 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	return (0);
}
