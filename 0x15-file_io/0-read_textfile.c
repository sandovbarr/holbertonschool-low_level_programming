#include "holberton.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fdescpread, fdescpdwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fdescpread = read(fd, buffer, letters);
	if (fdescpread == -1)
		return (0);

	fdescpdwrite = write(STDOUT_FILENO, buffer, fdescpread);
	if (fdescpdwrite == -1)
		return (0);

	close(fd);

	return (fdescpdwrite);
}
