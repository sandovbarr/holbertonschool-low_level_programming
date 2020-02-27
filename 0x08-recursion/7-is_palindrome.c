#include <stdio.h>

/**
 * _strlen_recursion - return the leng of a string
 * @s: pointer to string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}


/**
 * operation - functions that verify if is palindrome or not
 * @a: is a pointer
 * @tam: is the size of string
 * Return: integer.
 */

int operation(char *a, int tam)
{

	if (*a != *(a + tam))
		return (0);

	if (*a == *(a + tam / 2))
		return (1);

	if (*a == *(a + tam))
		return (operation(a + 1, tam - 2));

	return (5);
}



/**
 * is_palindrome - functions that verify if is palindrome or not
 * @s: is a pointer
 * Return: integer.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (operation(s, len));
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = is_palindrome("levpel");
	printf("%d\n", r);
	return (0);
}
