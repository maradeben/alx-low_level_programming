#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the table to add element to
 * @key: the key to add
 * @value: the associated value
 * Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index, i;
	char *value_cp;
	
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	/* compute the index */
	index = key_index((const unsigned char *)new_node->key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_cp);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return(0);
	}
	new_node->value = value_cp;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
