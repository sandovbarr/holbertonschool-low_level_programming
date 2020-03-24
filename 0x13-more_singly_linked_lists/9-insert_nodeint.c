#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new
 * node at a given position.
 * @head: pointer to head of list
 * @idx: is the index of the list where the new node
 * @n: integer to fill in the new node
 * should be added. Index starts at 0
 * Return: addres of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *scooch, *newnode, *filter;
	unsigned int counter = 0, counter2 = 0;

	if (!*head)
		return (NULL);
	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (!newnode)
			return (NULL);
		newnode->n = n, newnode->next = NULL;
		if (*head == NULL)
			*head = newnode;
		else
			newnode->next = *head, *head = newnode;
		return (newnode);
	}
	filter = *head;
	while (filter)
		filter = filter->next, counter2++;
	if (idx == counter2)
		return (add_nodeint_end(head, n));
	if (idx >= counter2)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n, newnode->next = NULL, scooch = *head;
	while (scooch && counter < idx - 1)
	{
		scooch = scooch->next;
		counter++;
	}
	newnode->next = scooch->next, scooch->next = newnode;
	return (newnode);
}
