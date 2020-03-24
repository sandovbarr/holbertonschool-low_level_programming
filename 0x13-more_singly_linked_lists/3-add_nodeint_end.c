#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 * @head: pointer to head
 * @n: integer that function recives
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *pt;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
	}
	else
	{
	pt = *head;
	while (pt->next)
	{
		pt = pt->next;
	}
	pt->next = newnode;
	}
	return (newnode);
}
