#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 *			of a listint_t linked list.
 * @head: pointer to the listint_t list
 * @index: the index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list
 * or NULL if the node does not exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;

		current = current->next;
	}
	return (NULL);
}
