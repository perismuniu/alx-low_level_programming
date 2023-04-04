#include "lists.h"

/**
 * add_nodeint - add  a new node at the beginning.
 * @head: head for struct listint_t.
 * @n: new
 * *Return: Address of new element or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (*head);
}
