#include "hash_tables.h"

/**
 * hash_table_create -function to create a hash table
 * @size: the size of the hash table
 * Return: pointerto the newly created hash table, NULL on failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int index;

	if (size == 0)
		return (NULL);

	/* allocate space for the table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* allocate space for 'size' hash nodes in the table */
	table->array = malloc(sizeof(hash_node_t *) * size);

	/* initialize each node to null */
	for (index = 0; index < size; index++)
		table->array[index] = NULL;

	return (table);
}
