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
 * main - prints the product of two arguments
 * @argc: number of arguments
 * @argv: pointer to the list of strings passsed as arguments
 * Return: 0 if error, 1 if can multiply
 */
int main(int argc, char *argv[])
{
	int i;
	int j;

	(void)(argc);
	if (!argv[1] || !argv[2])
	{
		printf("Error\n");
		return (0);
	}
	i = _atoi(argv[1]);
	j = _atoi(argv[2]);
	printf("%d\n", (i * j));
	return (0);
}
