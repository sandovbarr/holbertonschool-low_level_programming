#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: none
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *nodes, *nodeshanlder;

	if (!ht)
		return;

	for (; idx < ht->size; idx++)
	{
		nodes = ht->array[idx];
		while (nodes)
		{
			nodeshanlder = nodes->next;
			free(nodes->key);
			free(nodes->value);
			free(nodes);
			nodes = nodeshanlder;
		}
	}
	free(ht->array);
	free(ht);
}
