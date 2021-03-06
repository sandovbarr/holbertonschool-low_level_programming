#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: pointer to string
 * @n: counter to strings in the parameters
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list parameters;

	char *p;

	va_start(parameters, n);

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			p = va_arg(parameters, char*);

			if (p != NULL)
			{
				if (separator == NULL || i == n - 1)
					printf("%s", p);

				else
					printf("%s%s", p, separator);

			}
			else
				printf("(nil)");
		}
	}
	va_end(parameters);
	printf("\n");
}
