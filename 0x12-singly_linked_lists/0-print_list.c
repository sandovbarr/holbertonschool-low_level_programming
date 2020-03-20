#include "lists.h"

/**
 * print_list - function that orint strings
 * @h: pointer to head list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int loop = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		loop++;
	}
	return (loop);
}
