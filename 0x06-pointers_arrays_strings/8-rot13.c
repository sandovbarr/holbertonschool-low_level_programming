/**
 * *rot13 - encode string to rot13.
 * @p: string to encode.
 * Return: p string codified.
 */

char *rot13(char *p)

{

	char aph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rc[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i, j;

	for (i = 0; p[i] ; i++)
	{
		for (j = 0; aph[j] ; j++)
		{
			if (p[i] == aph[j])
			{
				p[i] = rc[j];
				break;
			}
		}
	}
	return (p);
}
