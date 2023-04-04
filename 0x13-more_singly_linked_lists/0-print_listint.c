#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a list listint_t.
 *
 * @h: head of struct listint_t.
 *
 * Return:  the number of nodes (n).
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	}

	return (n);
}

