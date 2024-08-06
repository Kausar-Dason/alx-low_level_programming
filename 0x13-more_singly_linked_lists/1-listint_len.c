#include "lists.h"

/**
 * listint_len - a function that returns the number of
 *		elements in a linked listint_t list.
 * @h: a pointer to listint_t list.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
