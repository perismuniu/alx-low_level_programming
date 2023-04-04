#include "lists.h"

/**
 * print_listint_safe -  function that prints a linked list.
 * @head: head of the list.
 * Return (0) if successful and exit with status 98 if the function fails.
 */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		exit(98);
	temp = head;

	while (temp != NULL)
	{
		while (temp != NULL)
		{
			printf("Datd = %d\n", temp->n);
			temp = temp->next;
		}
	}
	return (0);
}
