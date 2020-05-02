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
	newnode->n = n, newnode->next = NULL, newnode->prev = NULL;

	if (!*h)
	{
		*h = newnode;
		return (newnode);
	}
	if (idx == 0)
	{
		newnode->next = *h;
		aux->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	while (aux)
	{
		if (idx == iter)
		{
			aux->prev->next = newnode;
			newnode->prev = aux->prev;
			aux->prev = newnode;
			newnode->next = aux;
			return (newnode);
		}
		if (!aux->next && idx == iter + 1)
			return (free(newnode), add_dnodeint_end(h, n));
		aux = aux->next;
		iter++;
	}
	return (free(newnode), NULL);
}
