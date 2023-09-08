#include "hash_tables.h"

/**
 * hash_table_delete -  function that deletes a hash table.
 * @ht: hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
