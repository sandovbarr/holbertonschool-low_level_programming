#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t loop = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		loop++;
	}
	return (loop);
}
