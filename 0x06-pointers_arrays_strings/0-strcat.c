/**
 * _strcat - add string2 into string1.
 * @dest: is a main string
 * @src: is the strign to add
 * Return: Always dest.
 */

char *_strcat(char *dest, char *src)

{
	int i, j;

/*calculate cant of positions of string1*/
	for (i = 0; *(dest + i) != '\0' ; i++)
	{
	}

/*read the string 2 and add to string1 since last position of string1 */
	for (j = 0 ; *(src + j) != '\0' ; j++, i++)
	{
		*(dest + i) = *(src + j);
	}

	return (dest);

}
