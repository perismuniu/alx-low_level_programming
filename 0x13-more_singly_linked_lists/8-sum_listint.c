#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data in a list.
 * @head: head node.
 * Return: sum of all the data (sum).
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);
}
