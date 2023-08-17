#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a doubly linked list.
 * @head: pointer to the head of the doubly linked list.
 * @n: Integer value to be stored in the new node.
 * Return: Pointer to the newly added node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
