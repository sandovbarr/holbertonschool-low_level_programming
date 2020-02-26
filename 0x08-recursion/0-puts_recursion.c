#include "holberton.h"

/**
 * _puts_recursion - print a string using recursion
 * @s: pointer to
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
        _putchar(*s);
        if (*s != '\0')
                _puts_recursion(s + 1);
        if (*s == '\0')
                _putchar('\n');
}
