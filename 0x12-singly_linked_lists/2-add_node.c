#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to head
 * @str: string
 * Return: pointer of type list-t
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);

	for (i = 0; str[i]; i++)
	{}

	newnode->len = i;

	newnode->next = *head;

	*head = newnode;
	return (*head);
}
