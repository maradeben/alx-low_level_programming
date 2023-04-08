#include "hash_tables.h"

/**
 * hash_table_get - retrieve value from hash table
 * @ht: the hash table
 * @key: the key to look up
 * Return: value associated with the key, or NULL if not found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i = 0;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	for (i = 0; node; i++)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}
