#include <stdio.h>
#include "lists.h"

/**
 * list_len -  a function that returns the number of the
 *	elements in a linked list_t list
 * @h :a pointer to list_t list
 *
 * Return:the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
