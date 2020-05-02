#include "lists.h"

/**
 * add_dnodeint - adds a new node at
 * the beginning of a dlistint_t list.
 * @head: doble pointer to head
 * @n: nuber to insert in node
 * Return: the address of the new element
 * or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *aux = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (!*head)
		*head = newnode;
	else
	{
		newnode->next = *head;
		aux->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
