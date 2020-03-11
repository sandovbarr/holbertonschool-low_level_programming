#include "function_pointers.h"

/**
 * print_name - function that put the pointer name into
 * a parameter char * of function voidn f
 * @name: this name comes from other main
 * @f: is a pointer to function taht prints
 * Return: no return;
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;

	(*f)(name);
}
