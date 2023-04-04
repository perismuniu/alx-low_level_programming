#include "lists.h"

/**
 * free_listint - function that frees a list.
 * @head: struct head.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	current = head;

	while (head != NULL)
	{
		head = current->next;
		free(head);
	}
}

