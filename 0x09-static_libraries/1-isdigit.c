/**
 * _isdigit - compares int 0 to 9
 * @c: integer
 * Return: integer
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
