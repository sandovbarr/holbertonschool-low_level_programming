/**
 * _strcpy - copy strings into another string.
 * @dest: destiny of string.
 * @src: source.
 * Return: Always 0.
 */


char *_strcpy(char *dest, char *src)
{
	int i, l;

	for (l = 0; *(src + l) != '\0' ; l++)
	{
	}

	for (i = 0; i <= l; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
