#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: value associated with the key.
 * Return: 1 on success and 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element;
	hash_node_t *current;
	char *value_copy, *key_copy;

	if (!ht || !key || !value)
		return (0);
	value_copy = strdup(value);
	if (!value_copy)
		return (0);
	index =  hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current)
	{
		if (!strcmp(key, current->key))
		{	free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	new_element = calloc(1, sizeof(hash_node_t));
	if (!new_element)
	{	free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (!key_copy)
	{	free(value_copy);
		free(new_element);
		return (0);
	}
	new_element->key = key_copy;
	new_element->value = value_copy;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;
	return (1);
}
