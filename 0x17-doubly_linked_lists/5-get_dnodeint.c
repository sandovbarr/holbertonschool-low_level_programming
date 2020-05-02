#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: pointer to head of dlistint_t list
 * @index: index to search
 * Return: node found null if not found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int iterator = 0;

	while (aux)
	{
		if (iterator == index)
			return (aux);
		aux = aux->next;
		iterator++;
	}
	return (NULL);
}
