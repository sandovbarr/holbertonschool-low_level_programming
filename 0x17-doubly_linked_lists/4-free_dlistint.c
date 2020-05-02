#include "lists.h"

/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: pointer to head
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;

	if (!head)
		return;
	while (aux->next)
	{
		aux = aux->next;
		free(head);
		head = aux;
	}
	free(aux);
}
