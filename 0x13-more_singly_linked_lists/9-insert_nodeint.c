#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index at given position.
 * @head: head of list.
 * @idx: Index of the list.
 * @n: value of the index.
 * Return: (newnode).
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode, *temp;

	temp = *head;

	if (idx != 0)
	{
		for (i = 0; temp != NULL && i != idx - 1; i++)
		{
			temp = temp->next;
		}
	}

		if (temp == NULL && idx != 0)
			return (NULL);

		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);

		newnode->n = n;

		if (idx == 0)
		{
			newnode->next = *head;
			*head = newnode;
		}
		else
		{
			newnode->next = temp->next;
			temp->next = newnode;
		}

	return (newnode);
}

