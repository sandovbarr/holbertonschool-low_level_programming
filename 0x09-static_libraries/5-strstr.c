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
		for (j = 0; needle[j] && (haystack[i] == needle[0]) ; j++)
		{
			if (haystack[i + j] == needle[j])
			{
			}
			else
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
