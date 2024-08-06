#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 *			at index index of a listint_t linked list.
 * @head: a pointer to the head of listint_t list
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index -1; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
		return (-1);

	prev = current->next;
	current->next = prev->next;
	free(prev);

	return (1);
}
