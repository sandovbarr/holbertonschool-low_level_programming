#include "lists.h"

/**
 * dlistint_len - function that counts
 * number of elements.
 * @h: pointer to head
 * Return: the number of elements
 * in a linked dlistint_t list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
