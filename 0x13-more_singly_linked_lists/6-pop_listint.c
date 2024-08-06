#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 *		linked list, and returns the head node’s data (n).
 * @head: pointer to the head of listint_t list.
 *
 * Return: the deleted data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	if (head == NULL)
		return (0);

	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
