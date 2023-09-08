#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: an array of hash table
 * @key: the key name
 * @value: the value to set
 *
 * Return: 1 on success
 * 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	char *valuecpy = NULL, *keycpy = NULL;
	hash_node_t **array = NULL, *hashnode = NULL;

	size = ht->size;
	array = ht->array;

	if (key == NULL || value == NULL)
		return (0);
	else if (strlen(key) < 1)
		return (0);

	keycpy = malloc(strlen(key) + 1);
	if (keycpy == NULL)
		return (0);
	keycpy = strcpy(keycpy, key);

	valuecpy = malloc(strlen(value) + 1);
	if (valuecpy == NULL)
		return (0);
	valuecpy = strcpy(valuecpy, value);

	hashnode = malloc(sizeof(hash_node_t));
	if (hashnode == NULL)
		return (0);
	hashnode->key = keycpy;
	hashnode->value = valuecpy;
	hashnode->next = NULL;

	index = key_index((unsigned char *)key, size);
	if (array[index] != NULL)
		hashnode->next = array[index];

	array[index] = hashnode;

	return (1);
}
