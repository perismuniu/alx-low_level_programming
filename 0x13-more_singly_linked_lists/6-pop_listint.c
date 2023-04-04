#include "lists.h"

/**
 * pop_listint -  function that deletes the head node.
 *@head: head of linked list.
 * Return: head node’s data .
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *del;

	if (*head == NULL)
	return (data);

	del = *head;
	data  = del->n;
	free(*head);
	*head = del->next;

	return (data);
}
