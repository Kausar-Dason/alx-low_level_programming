#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to the listint_t list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
