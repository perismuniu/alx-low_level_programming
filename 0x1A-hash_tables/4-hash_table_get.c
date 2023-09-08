#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: the hash table to look into.
 * @key: key value.
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || ht->array == NULL || ht->size == 0)
	{
		return (NULL);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	item = ht->array[index];

	if (item != NULL)
	{
		while (item != NULL)
		{
			if (strcmp(item->key, key) == 0)
				return (item->value);
			item = item->next;
		}
	}
	return (NULL);
}
