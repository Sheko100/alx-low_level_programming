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
	hash_node_t **array = NULL, *nodep = NULL;
	char *value = NULL;

	if ((ht == NULL || key == NULL) || strlen(key) < 1)
		return (value);

	size = ht->size;
	array = ht->array;

	index = key_index((unsigned char *)key, size);
	nodep = array[index];
	while (nodep != NULL)
	{
		if (strcmp(nodep->key, key) == 0)
		{
			value = nodep->value;
			break;
		}
		nodep = nodep->next;
	}

	return (value);
}
