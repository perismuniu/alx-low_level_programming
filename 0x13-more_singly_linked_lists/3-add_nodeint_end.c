#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head : head for struct listint_t.
 *@n: lastnode.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastnode, *temp;

	lastnode = (listint_t *)malloc(sizeof(listint_t));

	if (lastnode == NULL)
	{
		printf("Failed\n");
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = lastnode;
		return (lastnode);
	}
	else
	{
		lastnode->n = n;
		lastnode->next = NULL;
		temp = *head;
		while (temp->next !=  NULL)
		{
		temp = temp->next;
		temp->next = lastnode;
		}
	}

	return (lastnode);
}

