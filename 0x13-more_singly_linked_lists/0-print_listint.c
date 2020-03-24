#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h:  pointer to head.
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counternodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		counternodes++;
	}
	return (counternodes);
}
