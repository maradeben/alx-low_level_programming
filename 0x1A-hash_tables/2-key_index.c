#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key to search
 * @size: the size of hash_talbe
 * Return:the index at whcih the key/value pair should be stored
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0 || key == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
