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
	listint_t *newnode, *temp;

	newnode = (listint_t *)malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode->n = n;
		newnode->next = NULL;
		temp = *head;
		for (int i = 0; i <= idx; i++)
		{
			temp = temp->next;

			if (temp == NULL)
				break;
		}
		if (temp != NULL)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			free(newnode);
		}
		else
		{
			return (NULL);
		}
	}
	return (newnode);
}

