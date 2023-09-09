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
	hash_node_t **array = NULL, *nodep = NULL;
	int count = 0;

	if (ht != NULL)
	{
		size = ht->size;
		array = ht->array;
		printf("{");
		while (i < size)
		{
			nodep = array[i];
			while (nodep != NULL)
			{
				if (count > 0)
					printf(", ");
				printf("'%s': '%s'", nodep->key, nodep->value);
				count++;
				nodep = nodep->next;
			}
			i++;
		}
		printf("}\n");
	}
}
