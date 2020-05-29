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

	if (!ht)
		return;

	printf("{");
	while (iterator <= ht->size)
	{
		if (ht->array[iterator] != NULL)
		{
			nodes = ht->array[iterator];
			while (nodes)
			{
				if(nodes->next)
					printf("'%s': '%s', ", nodes->key, nodes->value);
				else
					printf("'%s': '%s'", nodes->key, nodes->value);
				nodes = nodes->next;
			}
			iterator++;
		}
		iterator++;
	}
	printf("}\n");
}
