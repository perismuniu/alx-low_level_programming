#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list listint_t.
 *
 * @h- the head of the list listint_t.
 *
 * Return:  the number of nodes (n).
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	listint_t *new;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
	{
		printf("Error\n");
	}
	else
	{

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
	}
	}
	return (n);
}

