#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a doubly linked list.
 * @head: pointer to the head of the list.
 * Return: sum of all data in doubly linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
