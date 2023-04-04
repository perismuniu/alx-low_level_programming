#include "lists.h"

/**
 * add_nodeint - add  a new node at the beginning.
 * @*head: head for struct listint_t.
 * @n: node1.
 * *Return: Address of new element or NULL if failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node1;

	node1 = (listint_t *)malloc(sizeof(listint_t));

	if (node1 == NULL)
	{
		printf("Failed\n");
		return (NULL);
	}
	else
	{
		node1->n = n;
		node1->next = *head;
		*head = node1;
	}
	return (*head);
}
