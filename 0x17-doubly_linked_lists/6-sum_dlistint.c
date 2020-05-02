#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to head
 * Return: the sum of all data (n)
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int result = 0;

	if (!head)
		return (0);
	while (aux)
	{
		result += aux->n;
		aux = aux->next;
	}
	return (result);
}
