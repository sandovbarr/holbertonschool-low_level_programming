/**
 * _strncpy - copy and string in other based in n characters
 * @dest: is a destiny string
 * @src: is a source string
 * @n: is the value of characters to copy
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(src + i) != '\0' ; i++)
	{
	}

	for (j = 0 ; j < n && *(src + j) != '\0' ; j++)
	{
		*(dest + j) = *(src + j);
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
