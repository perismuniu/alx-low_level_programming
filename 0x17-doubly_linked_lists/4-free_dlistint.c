#include "lists.h"

/**
 * free_dlistint - Frees all the nodes of a doubly linked list.
 * @head: A pointer to the head node of the list.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
