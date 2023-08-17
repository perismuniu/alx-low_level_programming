#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 *  in a doubly linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * Return: 1 on success, -1 on failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	while (current != NULL)
	{
		if (index == 0)
		{
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			else
			{
				*head = current->next;
			}
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			free(current);
			return (-1);
		}
		current = current->next;
		index--;
	}
	return (-1);
}

