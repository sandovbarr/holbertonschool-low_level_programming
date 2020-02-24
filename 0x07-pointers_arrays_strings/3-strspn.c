/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string
 * @accept: values to compare.
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (i);
			}

		}
	}
	return (0);
}
