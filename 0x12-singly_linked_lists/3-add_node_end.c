#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double point to list
 * @str: string tu put inside
 * Return: pointer to structu
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newdata = NULL, *aux = NULL;
	int i;

	for (i = 0; str[i]; i++)
	{}

	newdata = malloc(sizeof(list_t));
	if (newdata == NULL)
		return (0);

	newdata->str = strdup(str);
	newdata->len = i;
	newdata->next = NULL;

	if (!*head)
		*head = newdata;
	else
	{
		aux = *head;
		while (aux->next)
		{
			aux = aux->next;
		}
		aux->next = newdata;
	}
	return (*head);
}
