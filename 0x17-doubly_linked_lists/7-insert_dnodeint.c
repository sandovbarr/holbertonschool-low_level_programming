#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: pointer to head
 * @idx: index given to insert node
 * @n: value for newnode
 * Returns: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx
 * do not add the new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *aux = *h;
	unsigned int iter = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		*h = newnode;
		return (newnode);
	}
	while (aux)
	{
		if (iter == idx - 1)
		{
			newnode->next = aux->next;
			newnode->prev = aux;
			aux->next = newnode;
			return (newnode);
		}
		aux = aux->next;
		iter++;
	}
	free(newnode);
	return (NULL);
}
