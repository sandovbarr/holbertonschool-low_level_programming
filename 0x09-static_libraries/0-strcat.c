/**
 * _strcat - add string2 into string1.
 * @dest: is a main string
 * @src: is the strign to add
 * Return: Always dest.
 */

char *_strcat(char *dest, char *src)

{
	int i, j;

	for (i = 0; *(dest + i) != '\0' ; i++)
	{
	}

	for (j = 0 ; *(src + j) != '\0' ; j++, i++)
	{
		*(dest + i) = *(src + j);
	}

	return (dest);

}
