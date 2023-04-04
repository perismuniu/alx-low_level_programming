#include "lists.h"

/**
 * pop_listint -  function that deletes the head node.
 *@head: head of linked list.
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *del;

	if (*head == NULL)
	{
		printf("Fail\n");
	}
	else
	{
		del = *head;
		*head = del->next;
		printf("%d\n", del->n);
		free(del);
	}
	return (n);
}
