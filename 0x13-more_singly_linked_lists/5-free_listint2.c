#include "lists.h"

/**
 * free_listint2 - fucntion that frees a listint_t list.
 * The function sets the head to NULL
 * @head: pointer to head of listint
 * Return: none
 */


void free_listint2(listint_t **head)
{
	listint_t *pointer;

	if (!*head)
		return;

	pointer = *head;

	while (pointer)
	{
		pointer = pointer->next;
		free(*head);
		*head = pointer;
	}
	*head = NULL;
}
