#include "variadic_functions.h"

/**
 * print_numbers - print the numbers passed by arguments
 * @separator: is a pointer to a string
 * @n: is the numbers of arguments
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", va_arg(arguments, int));
		}
		else
		{
			printf("%d%s", va_arg(arguments, int), separator);
		}
	}
	va_end(arguments);
}
