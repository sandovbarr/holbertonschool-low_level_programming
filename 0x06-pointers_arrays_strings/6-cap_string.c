/**
 * cap_string - capitalize initial letter.
 * @a: is a pointer
 * Return: Always pointer.
 */

char *cap_string(char *a)
{

	int i, j;
	char ch[] = ",;.!?\"(){}\t\n ";
	char *k;

	k = ch;
	for (i = 0 ; *(a + i) ; i++)
	{
		if (i == 0 && (a[i] >= 97 && a[i] <= 122))
		{
			*(a + i) -= 32;
		}
		for (j = 0 ; *(k + j) ; j++)
		{
			if (*(a + i) == *(k + j))
			{
				if (*(a + (i + 1)) >= 97 &&
				    *(a + (i + 1)) <= 122)
				{
					*(a + (i + 1)) -= 32;
				}
			}
		}
	}
	return (a);
}
