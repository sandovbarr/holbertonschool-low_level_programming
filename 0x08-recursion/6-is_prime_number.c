/**
 * operation - check validates n
 * if it is prime
 * @n: integer
 * @x: integer
 * Return: Always 0.
 */

int operation(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n == x)
		return (1);

	if (n % x == 0)
		return (0);

	return (operation(n, x + 1));

}

/**
 * is_prime_number - check validates n
 * if it is prime
 * @n: integer
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (operation(n, 2));
}
