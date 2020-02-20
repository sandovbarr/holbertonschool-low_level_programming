/**
 * _strncat - add string2 into string1
 * @dest: is a main string
 * @src: is the strign to add
 * @n: cant of bytes
 * Return: Always dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	for (i = 0; *(dest + i) != '\0' ; i++)
	{
	}

	for (j = 0 ; *(src + j) < *(src + n) ; j++, i++)
	{
		*(dest + i) = *(src + j);
	}

	return (dest);

}
