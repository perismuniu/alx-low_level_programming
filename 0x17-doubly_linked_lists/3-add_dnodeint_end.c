#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a doubly linked list.
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the newly added node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
