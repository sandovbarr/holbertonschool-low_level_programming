/**
 * factorial - return factorial of a number recived
 * @n: number to make factorial
 * Return: result integer
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);

	if (n > 0)
		return (n * factorial(n - 1));
	else
		return (0);
}
