#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list.
 * @head: head of the list.
 * Return: Pointer to the first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousnode, *currentnode;

	if (*head != NULL)
	{
		previousnode = *head;
		currentnode = (*head)->next;
		*head = (*head)->next;

		previousnode->next = NULL;

		while (head != NULL)
		{
			*head = (*head)->next;
			currentnode->next = previousnode;

			previousnode = currentnode;
			currentnode = *head;
		}
		*head = previousnode;
	}
	return (*head);
}
