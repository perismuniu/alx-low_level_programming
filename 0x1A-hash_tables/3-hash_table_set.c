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
	int index;
	hash_node_t *new_element;
	hash_node_t *current;

	if (!ht || !key || !value)
	{	return (0); }
	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_element = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_element)
	{	return (0); }
	new_element->key = strdup(key);
	if (!new_element->key)
	{	free(new_element);
		return (0); }
	new_element->value = strdup(value);
	if (!new_element->value)
	{
		free(new_element->key);
		free(new_element);
		return (0);
	}
	new_element->next = NULL;

	if (ht->array[index] == NULL)
	{	ht->array[index] = new_element; }
	else
	{	current = ht->array[index];
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_element;
	}
	return (1);
}
