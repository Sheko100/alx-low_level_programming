#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: the key to get its index
 * @size: the array of the hash table size
 *
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
