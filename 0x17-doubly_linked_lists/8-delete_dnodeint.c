#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes
 * a node at a given position.
 * @h: pointer to head
 * @index: index given to insert node
 * Returns: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *aux2 = aux;
	unsigned int iter = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		aux2 = aux->next;
		free(aux);
		*head = aux2;
		return (1);
	}
	while (aux)
	{
		if (iter == index)
		{
			aux2 = aux->prev;
			aux2->next = aux->next;
			aux->next->prev = aux2;
			free(aux);
			return (1);
		}
		aux = aux->next;
		iter++;
	}
	return (-1);
}
