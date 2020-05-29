#include "hash_tables.h"

/**
 * hash_table_print - function that hashtables
 * @ht: is the hash table
 * Return: none.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iterator = 0;
	hash_node_t *nodes = NULL;
	int keysfound = 0;

	if (!ht)
		return;

	printf("{");
	while (iterator <= ht->size)
	{
		if (ht->array[iterator] != NULL)
		{
			keysfound++;
			nodes = ht->array[iterator];
			while (nodes)
			{
				printf("'%s': '%s', ", nodes->key, nodes->value);
				nodes = nodes->next;
			}
			iterator++;
		}
		iterator++;
	}
	if (keysfound == 0)
		printf("}\n");
	else
		printf("\b\b}\n");
}
