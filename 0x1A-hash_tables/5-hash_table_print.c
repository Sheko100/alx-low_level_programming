#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: array of the hash table
 *
 * Return: void always
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i = 0;
	hash_node_t **array = NULL;

	if (ht != NULL)
	{
		size = ht->size;
		array = ht->array;
		printf("{");
		while (i < size)
		{
			if (array[i])
				printf("'%s': '%s', ", array[i]->key, array[i]->value);
			i++;
		}
		printf("}\n");
	}
}
