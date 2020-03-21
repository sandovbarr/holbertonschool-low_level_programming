#include "lists.h"

/**
 * free_list - free the linked list created previously
 * @head: principal structure to free
 * Return: don't have.
 */

void free_list(list_t *head)
{
	list_t *liberar = NULL;

	liberar = head;

	while (liberar)
	{
		liberar = liberar->next;
		free(head->str);
		free(head);
		head = liberar;
	}
}
