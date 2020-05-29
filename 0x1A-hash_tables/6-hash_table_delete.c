#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int iterator = 0;
	hash_node_t *nodes, *nodeshanlder;

	if (!ht)
		return;

	while (iterator < ht->size)
	{
		nodes = ht->array[iterator];
		while (nodes)
		{
			nodeshanlder = nodes->next;
			free(nodes->value);
			free(nodes->key);
			free(nodes);
			nodes = nodeshanlder;
		}
		iterator++;
	}
	free(ht->array);
	free(ht);
}
