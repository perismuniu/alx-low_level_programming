#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a doubly linked list.
 * @head: pointer to the head of the list.
 * @index: index of the node starting from 0.
 * Return: the current node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int current_index = 0;

	current = head;
	while (current != NULL && current_index < index)
	{
		current = current->next;
		current_index++;
	}
	return (current);
}
