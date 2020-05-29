#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int iterator = 0;
	hash_node_t *nodes = NULL;
	hash_node_t *nodeshanlder = NULL;

	if (!ht)
		return;

	while (iterator <= ht->size)
	{
		if (ht->array[iterator] != NULL)
		{
			nodes = ht->array[iterator];
			while (nodes)
			{
				if(nodes->next)
				{
					nodeshanlder = nodes->next;
					free(nodes->value);
					free(nodes->key);
					free(nodes);
					nodes = nodeshanlder;
				}
				else
				{
					free(nodes->value);
					free(nodes->key);
					free(nodes);
					break;
				}				
				nodes = nodes->next;
			}
			iterator++;
		}
		iterator++;
	}
	free(ht->array);
	free(ht);
}
