#include "holberton.h"

/**
 * _strlen - count the index of a string
 * @s: the string wich has beem recived
 * Return: count.
 */


int _strlen(char *s)
{

	char *string;
	int count = 0;

	string = s;

	while (*string != '\0') /*mientras que mi apuntador difiera de "\0" */
	{
		count++;  /*acá aumenta mi contador*/
		string++; /*acá aumenta mi posicion del apuntador*/
	}

	return (count);

}


/**
 * rev_string - check the code for Holberton School students.
 * @s: char recived for main function
 * Return: Always 0.
 */


void rev_string(char *s)
{
	int tamanos = _strlen(s);
	char string2[1000];

	char *aps2 = string2; /*apuntador a string 2*/

	int pos = _strlen(s) - 1; /*tamaño menos null string1*/
	int i;

	for (i = 0; i <= pos; i++)
	{
		*(aps2 + i) = *(s + i);
	}

	for (i = 0; i <= tamanos - 1; i++)
	{
		*(s + i) = *(aps2 + pos);
		pos--;
	}
}
