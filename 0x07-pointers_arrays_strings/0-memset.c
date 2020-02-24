/**
 * _memset - prints inside the buffer
 * @s: pointer to buffer
 * @b: the value which fills
 * @n: number of bytes to fill
 * Return: address in pointer.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
