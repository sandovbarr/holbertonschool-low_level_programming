/**
 * *leet - check the code for Holberton School students.
 * @a: is a pointer
 * Return: char.
 */

char *leet(char *a)

{

	char A[] = "AaEeOoTtLl";
	char B[] = "43071";
	int i, j;

	for (i = 0; a[i]; i++)
	{
		for (j = 0; A[j] ; j++)
		{
			if (a[i] == A[j])
			{
				a[i] = B[j / 2];
			}
		}
	}
	return (a);
}
