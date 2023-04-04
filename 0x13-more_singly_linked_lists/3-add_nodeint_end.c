#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head : head for struct listint_t.
 *@n: newnode.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
		temp = *head;
		while (temp->next !=  NULL)
		{
		temp = temp->next;
		}
		temp->next = newnode;
	}

	return (newnode);
}

