#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - function that selects the correct function to
 * perform the operation asked by the user.
 * @argc: arguments counter
 * @argv: arguments values
 * return: integer
 */


int main(int argc, char **argv)
{

	int res;

	if (argc < 1 && argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' &&
	    argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' && argv[3][0] == '0') ||
	    (argv[2][0] == '%' && argv[3][0] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
	return (printf("%d\n", res));
}
