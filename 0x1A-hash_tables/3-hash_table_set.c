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
	hash_node_t *new_node = NULL, *temp = NULL;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL)
		return (0);
	if (key == NULL || strlen(key) <= 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			strcpy((char *)value,temp->value);
			return (1);
		}
		temp = temp->next;
	}
	temp = ht->array[index];
	new_node = malloc(sizeof(hash_node_t));
	if (new_node != NULL)
	{
		strcpy((char *)key, new_node->key);
		strcpy((char *)value, new_node->value);
		new_node->next = temp;
		ht->array[index] = new_node;
	}

	return (1);
}
