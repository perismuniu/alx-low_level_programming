#include "lists.h"

/**
 * insert_dnodeint_at_index -  function that inserts a new node
 * at a given position.
 * @h: Pointer to head of doubly linked list.
 * @idx: index of the list where new node should be added.
 * @n: value to be stored in new node.
 * Return: new node at given position.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int current_position;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL || idx == 1)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
			*h = new_node;
		}
	}
	current = *h;
	current_position = 1;
	while (current_position < idx  && current->next != NULL)
	{
		current = current->next;
		current_position++;
	}
	if (current_position < idx)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	return (new_node);
}
