#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements n in a linked list.
 * @h: head of a linked list.
 * Return: number of elements n
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h  = h->next;
		n++;
	}
	return (n);
}
