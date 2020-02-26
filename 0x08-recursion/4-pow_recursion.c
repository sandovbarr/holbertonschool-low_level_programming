/**
 * _pow_recursion - return the exp
 * @x: factor
 * @y: exponential
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	if (y == 1)
		return (x);

	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else
		return (0);
}
