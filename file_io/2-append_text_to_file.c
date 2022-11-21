#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: pointer to a file
 * @text_content: content of file
 *
 * Return: 1 or -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *append;
	append = fopen(filename, "a");

	if (filename == 0 || append == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fprintf(append, "%s", text_content);

	return (1);
}
