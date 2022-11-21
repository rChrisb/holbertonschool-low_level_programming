#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: pointer to a file
 * @letters: number of letters it shouls read and print
 *
 * Return: number of number that have been actually printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t len;
	char buf[20000];
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	if (filename == NULL)
		return (0);

	if (letters == 0)
	{
		close(fd);
		return (0);
	}

	if (letters == 2000)
		fprintf(stderr, "%s", buf);

	read(fd, buf, letters);
	buf[strlen(buf)] = '\0';
	close(fd);

	printf("%s", buf);
	len = strlen(buf);


	return (len);
}
