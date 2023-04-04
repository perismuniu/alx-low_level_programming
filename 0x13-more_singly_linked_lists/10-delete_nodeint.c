#include "lists.h"

/**
 *  delete_nodeint_at_index - function that deletes the node at index.
 *  @head: head of list.
 *  @index: index of node that should be deleted.
 *  Return: 1 if successful and -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *delete, *temp;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	else
	{
		while (temp != NULL && i != index - 1)
		{
			i++;
			temp = temp->next;
		}
		if (i != index - 1)
			return (-1);
		delete = temp->next;
		temp->next = temp->next->next;
		free(delete);
		return (1);
	}
}
