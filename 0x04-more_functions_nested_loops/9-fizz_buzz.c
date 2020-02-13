#include <stdio.h>
#include <stdlib.h>

/**
 * main - print fizz buzz of fizbuzz
 * Return: none
 */

int main(void)

{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", n);
		}
	}
	return (0);
}
