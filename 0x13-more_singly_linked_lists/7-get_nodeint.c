#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to head
 * @index: unsigded integer
 * Return: nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pointer;
	unsigned int counter = 0;

	pointer = head;

	while (pointer && counter < index)
	{
	pointer = pointer->next;
	counter++;
	}

	if (pointer != NULL)
	{
	return (pointer);
	}
	else
	{
	return (NULL);
	}
}
