#include <stdio.h>

/**
 * main - prints the number of arguments of the program
 * @argc: number of arguments
 * @argv: pointer to the list of strings passsed as arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for  (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
