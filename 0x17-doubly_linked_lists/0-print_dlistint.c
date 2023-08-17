#include "lists.h"

/**
 * print_dlistint - function that prints the elements of a doubly linked list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the doubly linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t node_count = 0;

	current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
