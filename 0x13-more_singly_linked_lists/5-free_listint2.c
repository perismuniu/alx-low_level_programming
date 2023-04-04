#include "lists.h"

/**
 * free_listint2 - function that frees a list.
 * @head:  head of the list.
 */

void free_listint2(listint_t **head)
{

	listint_t *temp, *current;

	if (head != NULL)
	{
		current = *head;
		temp = current;

		while (current != NULL)
		{
		current = current->next;
		free(temp);
		}
		*head = NULL;
	}
}
