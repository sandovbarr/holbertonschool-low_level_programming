#include <stdio.h>

/**
 * _abs - absolute number
 * @x: integer
 * Return: integer
 */

int _abs(int x)
{
	if (x > 0)
	{
		x = x * 1;
	}
	else if (x < 0)
	{
		x = x * -1;
	}
	return (x);
}
