#include "variadic_functions.h"

/**
 * print_integer - prints only integers
 * @arguments: get arguments
 * Return: none
 */
void print_integer(va_list arguments)
{
	printf("%i", va_arg(arguments, int));
}

/**
 * print_char - prints only char
 * @arguments: get arguments
 * Return: none
 */

void print_char(va_list arguments)
{
	printf("%c", (char)va_arg(arguments, int));
}

/**
 * print_string - prints strings
 * @arguments: get arguments
 * Return: none
 */
void print_string(va_list arguments)
{
	char *j = va_arg(arguments, char*);

	if (!*j)
	{
		j = "(nil)";
	}
	printf("%s", j);
}

/**
 * print_float - print float numbers
 * @arguments: that recive
 *
 */

void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}


/**
 * print_all - function that prints anything.
 * @format: constant pointer
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	st select[] = {

		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	int i = 0;
	int j = 0;

	char *sep = "";

	va_list arguments;

	va_start(arguments, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (format[i] == select[j].opc[0])
			{
				printf("%s", sep);
				select[j].f(arguments);
				sep = ", ";
			}
			j++;
		}
		i++;
		j = 0;
	}
	printf("\n");
	va_end(arguments);
}
