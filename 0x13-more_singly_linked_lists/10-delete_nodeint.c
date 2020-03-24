#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to head of the list
 * @index: the identifier to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0, counterlist = 0;
	listint_t *scooch, *deletenode, *filter;

	filter = *head;
	while (filter && filter->next != NULL)
	{
		filter = filter->next;
		counterlist++;
	}

	if (index > counterlist)
		return (-1);

	if (!*head)
		return (-1);

	scooch = *head;

	if (index > 0)
	{
		while (*head && counter < index - 1)
		{
			scooch = scooch->next;
			counter++;
		}
		deletenode = scooch;
		deletenode = deletenode->next;
		scooch->next = deletenode->next;
		free(deletenode);
		return (1);
	}
	else
	{
		scooch = scooch->next;
		free(*head);
		*head = scooch;
		return (1);
	}
}
