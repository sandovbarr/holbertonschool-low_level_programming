#include "holberton.h"
#include <stdio.h>

/**
 *main - function with arguments
 *@argc: cant of arguments
 *@argv: value of arguments
 *Return: integer
 */

int main(int argc, char *argv[])
{
	(void)(argv);

	return (printf("%d\n", argc - 1));
}
