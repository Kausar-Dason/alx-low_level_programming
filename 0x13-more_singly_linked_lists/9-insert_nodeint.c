#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 *			a new node at a given position.
 * @head: a pointer to the head of listint_t list
 * @idx: is the index of the list where the new node should be added
 * @n: the value to be inserted
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size;
	listint_t *current, *new_node;

	current = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (size = 0; size < idx - 1 && current != NULL; size++)
	{
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
