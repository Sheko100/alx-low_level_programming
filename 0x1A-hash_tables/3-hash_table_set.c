#include "hash_tables.h"
#include <stdio.h>

/**
 * make_hash_node - creates a hash node
 * @key: the key of the hash node
 * @value: the value of the hash node
 *
 * Return: pointer to the new hash node on success
 * NULL otherwiser
 */
hash_node_t *make_hash_node(const char *key, char *value)
{
	hash_node_t *hashnode = NULL;
	char *keydup = NULL;

	keydup = strdup(key);
	if (keydup == NULL)
		return (NULL);

	hashnode = malloc(sizeof(hash_node_t));
	if (hashnode == NULL)
		return (NULL);

	hashnode->key = keydup;
	hashnode->value = value;
	hashnode->next = NULL;

	return (hashnode);
}

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
	char *valuedup = NULL;
	hash_node_t **array = NULL, *hashnode = NULL;

	if (ht == NULL)
		return (0);
	size = ht->size;
	array = ht->array;

	if (key == NULL || value == NULL)
		return (0);
	else if (strlen(key) < 1)
		return (0);

	valuedup = strdup(value);
	if (valuedup == NULL)
		return (0);

	index = key_index((unsigned char *)key, size);
	if (array[index] == NULL || strcmp(array[index]->key, key) != 0)
	{
		hashnode = make_hash_node(key, valuedup);
		if (hashnode == NULL)
			return (0);
		if (array[index] != NULL)
			hashnode->next = array[index];
		array[index] = hashnode;
	}
	else
		array[index]->value = valuedup;

	return (1);
}
