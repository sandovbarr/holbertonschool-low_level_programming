#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: filename
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written,
 * write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, cs = 0, fdescpdwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[cs])
			cs++;
		fdescpdwrite = write(fd, text_content, cs);
		if (fdescpdwrite == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
