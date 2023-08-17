#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 *  in a doubly linked list.
 *  @h: Pointer to the head of the doubly linked list.
 *  Return: Number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t element_count = 0;

	current = h;

	while (current != NULL)
	{
		current = current->next;
		element_count++;
	}
	return (element_count);
}
