#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a linked listint_t list
 * @h: pointer to header.
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t counternodes = 0;

	while (h)
	{
		h = h->next;
		counternodes++;
	}
	return (counternodes);
}
