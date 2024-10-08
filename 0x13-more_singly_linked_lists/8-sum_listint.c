#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 *		data (n) of a listint_t linked list.
 * @head: pointer to the listint_t list
 *
 * Return: the sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
