#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: a pointer to the listint_t list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
