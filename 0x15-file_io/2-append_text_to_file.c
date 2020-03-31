#include "holberton.h"

/**
 * append_text_to_file - that appends text at the end of a file.
 * @filename: is the name of the file.
 * @text_content: is the NULL terminated string
 * to add at the end of the file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cs = 0, fdw;

	if (filename == NULL)
		return (-1);
	if (filename && !text_content)
		return (1);

	while (text_content[cs])
		cs++;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	fdw = write(fd, text_content, cs);
	if (fdw == -1)
		return (-1);
	return (1);
}
