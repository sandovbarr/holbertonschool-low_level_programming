#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: pointer to head
 * @idx: index given to insert node
 * @n: value for newnode
 * Return: the address of the new node, or NULL if it failed
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

	if (!*h || n < 0)
		return (free(newnode), NULL);
	if (idx == 0)
	{
		newnode->next = *h;
		aux->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (aux)
	{
		if (idx == i)
		{
			aux->prev = node->prev;
			aux->next = newnode;
			newnode->prev = aux;
			aux->prev->next = aux;
			return (newnode);
		}
		if (!newnode->next && idx == iter + 1)
			return (free(newnode), add_dnodeint_end(h, n));
		aux = aux->next;
		iter++;
	}
	return (free(newnode), NULL);
}
