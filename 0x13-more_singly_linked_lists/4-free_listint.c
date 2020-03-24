#include "lists.h"

/**
 * free_listint -  function that free al the buffer
 * at the end of a listint_t list.
 * @head: pointer to head
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *pointer;

	while (head)
	{
		pointer = head->next;
		free(head);
		head = pointer;
	}
}
