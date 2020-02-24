/**
 * _strstr - gets addres of string into another string
 * @haystack: string to search
 * @needle: string to search
 * Return: pointer.
 */

char *_strstr(char *haystack, char *needle)

{
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i]; i++)
	{
		while (haystack[i] != needle[j])
		{
			haystack++;
		}

		while (haystack[i] == needle[j] && haystack[i] && needle[j])
		{
			i++;
			j++;

			if (needle[j + 1] != '\0')
			{
				return (++haystack);
			}
		}
	}
	return (0);
}
