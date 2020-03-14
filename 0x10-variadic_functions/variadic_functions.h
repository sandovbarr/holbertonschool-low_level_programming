#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct formats
{
	char *opc;
	void (*f) (va_list);
}st;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_integer(va_list);
void print_char(va_list);
void print_string(va_list);
void print_float(va_list);

#endif

