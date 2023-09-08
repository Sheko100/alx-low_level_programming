#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: array of hash table
 * @key: the key name
 *
 * Return: the value associated with the key
 * NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t **array = NULL;
	char *value = NULL;

	if ((ht == NULL || key == NULL) || strlen(key) < 1)
		return (NULL);
	size = ht->size;
	array = ht->array;

	index = key_index((unsigned char *)key, size);
	if (array[index] != NULL)
		value = array[index]->value;

	return (value);
}
