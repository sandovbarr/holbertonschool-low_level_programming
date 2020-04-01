#include "holberton.h"
/**
 * main - function that copya first file into a second file.
 * @argc: argument counter
 * @av: argument values
 * Return: integer
 */
int main(int argc, char *av[])
{
	int f1, f2, fread, fwrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(av[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		fread = read(f1, buffer, 1024);
		if (fread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",av[1]);
			exit(98);
		}
		fwrite = write(f2, buffer, fread);
		if (fwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (fread == 1024);

	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);
	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);
	return (0);
}
