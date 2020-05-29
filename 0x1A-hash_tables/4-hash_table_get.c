#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value
 * associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashidx = 0;
	hash_node_t *headaux = NULL;

	if (!ht || !key)
		return (NULL);

	hashidx = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[hashidx])
		return (NULL);
	headaux = ht->array[hashidx];
	while (headaux)
	{
		if (strcmp(headaux->key, key) == 0)
			break;
		headaux = headaux->next;
	}
	return (headaux->value);
}
