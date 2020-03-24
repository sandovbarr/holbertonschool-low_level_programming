#include "lists.h"

/**
 * sum_listint - function that returns
 * the sum of all the data (n) of a listint_t linked list.
 * @head: pointer to list head
 * Return: the sum of all data
 */

int sum_listint(listint_t *head)
{
	int suma = 0;

	if (!head)
		return (0);
	while (head)
	{
		suma += head->n;
		head = head->next;
	}

	return (suma);
}
