#include <stdio.h>

/**
 *_atoi - extract first number from
 *@s: the string to go through
 *Return: the char array copied
 */

int _atoi(char *s)
{
	int i, crrtval, sign;
	unsigned int rta;

	i = 0;
	rta = 0;
	sign = 1;
	while (s[i] != '\0')
	{
		crrtval = s[i];
		if (crrtval >= 48 && crrtval <= 57)
		{
			if (rta > 0)
			{
				rta = rta * 10 + crrtval - 48;
			}
			else
				rta = crrtval - 48;
		}
		else if (crrtval == 45)
		{
			sign *= -1;
		}
		else if (crrtval > 0 && rta > 0)
		{
			break;
		}
		i++;
	}
	return (rta * sign);
}

/**
 * is_int - check if all chars in a string are digits
 * @s: string to check
 * Return: 1 if all chars are digits, 0 if not
 */
int is_int (char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			s++;
		else
			return (0);
	}
	return (1);
}

/**
 * main - prints the number of arguments of the program
 * @argc: number of arguments
 * @argv: pointer to the list of strings passsed as arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (is_int(argv[i]))
			(sum += _atoi(argv[i]));
		else
			break;
	}
	if (i == argc)
	{
		printf("%d\n", sum);
		return (1);
	}
	else
		printf("Error\n");
	return (0);
}
