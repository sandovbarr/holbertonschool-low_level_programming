#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: can not be an empty string
 * @value: is the value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_idx = 0;
	hash_node_t *head = NULL, *iter = NULL;
	hash_node_t *newnode = NULL;

	if (!key || !ht)
		return (0);

	newnode = malloc(sizeof(hash_node_t *));
	if (!newnode)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	hash_idx = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[hash_idx])
	{
		head = newnode;
		ht->array[hash_idx] = head;
		return (1);
	}
	else
	{
		iter = ht->array[hash_idx];
		while (iter)
		{
			if (strcmp(iter->key, key) == 0)
			{
				free(iter->value);
				iter->value = strdup(value);
				return (1);
			}
			iter = iter->next;
		}
		iter = ht->array[hash_idx];
		newnode->next = iter;
		head = newnode;
	}
	return (1);
}
