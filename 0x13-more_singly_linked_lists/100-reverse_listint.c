#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list.
 * @head: head of the list.
 * Return: Pointer to the first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousnode, *newnode;

	previousnode = NULL;
	newnode = NULL;

	while (head != NULL)
	{
		newnode = (*head)->next;
		(*head)->next = previousnode;
		previousnode = *head;
		*head = newnode;
	}
	*head = previousnode;
	return (*head);
}
