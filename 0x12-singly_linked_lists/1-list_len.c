#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int loop;

	while (h)
	{
		h = h->next;
		loop++;
	}
	return(loop);
}
