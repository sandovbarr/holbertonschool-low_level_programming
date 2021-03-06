#include "lists.h"

/**
 * pop_listint - deletes the head
 * node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to head.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *pointer;
	int copy = 0;

	if (!*head)
		return (0);

	pointer = *head;
	copy  = pointer->n;

	pointer = pointer->next;
	free(*head);
	*head = pointer;
	return (copy);
}
