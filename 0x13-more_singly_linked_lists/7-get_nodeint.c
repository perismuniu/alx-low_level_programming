#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: head node.
 * @index: index of the node starting from 0.
 *Return: Node of index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count  = 0;

	listint_t *temp;

	temp = head;

	while (count != index && temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (count != index)
		return (NULL);

	return (temp);
}
