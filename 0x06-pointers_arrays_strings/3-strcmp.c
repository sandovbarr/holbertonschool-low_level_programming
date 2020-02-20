/**
 * _strcmp - check the code for Holberton School students.
 * @s1: string 1
 * @s2: string 2
 * Return: integer.
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		if (*(s1 + i) != *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}
