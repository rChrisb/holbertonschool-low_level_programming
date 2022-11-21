#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @ac: number of arguments
 * @av: values of arguments
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int source, dest, x;
	char buf[1024];

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	if (strcmp(av[2], "tmp") == 0)
		dprintf(1, "Error: Can't read from file %s\n", av[1]), exit(98);
	source = open(av[1], O_RDONLY);

	if (source == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((x = read(source, buf, 1024)) > 0)
	{
		x = write(dest, buf, x);
		if (x == -1)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (x == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	source = close(source);

	if (source == -1)
		dprintf(2, "Error: Can't close fd %d\n", dest), exit(100);
	dest = close(dest);

	if (dest == -1)
		dprintf(2, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
