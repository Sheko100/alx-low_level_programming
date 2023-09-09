#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = NULL;

	printf("size: %ld\n", size);
	return (ht);
}

/**
 * shash_table_set - sets the hash table
 * @ht: an array of hash table
 * @key: the key name
 * @value: the value to set
 *
 * Return: 1 on success
 * 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *keydup = NULL, *valuedup = NULL;

	if (ht == NULL)
		return (0);

	keydup = strdup(key);
	valuedup = strdup(value);
	printf("%s:%s\n", keydup, valuedup);

	return (1);
}
/**
 * shash_table_print - prints a hash table
 * @ht: array of the hash table
 *
 * Return: void always
 */
void shash_table_print(const shash_table_t *ht)
{
	printf("%ld hash table\n", ht->size);
}


/**
 * shash_table_print_rev - prints hash table reversed
 * @ht: array of hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	printf("%ld hash table reversed\n", ht->size);
}
/**
 * shash_table_delete - delets hash table
 * @ht: hasb table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	free(ht);
}
