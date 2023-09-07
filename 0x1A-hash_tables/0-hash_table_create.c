#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	if (size == 0)
	{	return (NULL); }

	table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
	{	return (NULL); }

	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
