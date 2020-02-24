/**
 * _memcpy - copy n bytes of src to dest
 * @dest: destiny to be copied
 * @src: source of elements
 * @n: number of bytes
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
