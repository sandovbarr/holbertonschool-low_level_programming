#include "hash_tables.h"

/**
 * hash_table_create - function
 * that creates a hash table.
 * @size: size array
 * Return: a pointer to the newly
 * created hash table
 * If something went wrong, return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;

	if (size < 1)
		return (NULL);

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);
	new_ht->size = size;
	new_ht->array = calloc(size, sizeof(hash_node_t *));
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);
}
