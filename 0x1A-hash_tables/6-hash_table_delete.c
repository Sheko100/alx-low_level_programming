#include "hash_tables.h"

/**
 * chain_delete - delets a linked list of hash table
 * @head: the linked list head
 *
 * Return: void
 */
void chain_delete(hash_node_t *head)
{
	hash_node_t *nodep = NULL, *temp = NULL;

	nodep = head;
	while (nodep != NULL)
	{
		free(nodep->key);
		free(nodep->value);
		temp = nodep->next;
		free(nodep);
		nodep = temp;
	}
}
/**
 * hash_table_delete - deletes a hash table
 * @ht: array of hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i = 0;
	hash_node_t **array = NULL;

	if (ht != NULL)
	{
		size = ht->size;
		array = ht->array;
		while (i < size)
		{
			if (array[i] != NULL)
				chain_delete(array[i]);
			i++;
		}
		free(array);
		free(ht);
	}
}
