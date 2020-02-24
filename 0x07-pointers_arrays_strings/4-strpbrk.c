/**
 * _strpbrk - returs firs coincidence
 * @s: string to validate
 * @accept: string that compares
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
