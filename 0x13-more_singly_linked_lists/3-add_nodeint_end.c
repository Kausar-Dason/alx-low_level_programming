#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 *		at the end of a listint_t list.
 * @head: a pointer to the head of listint_t list.
 * @n: value to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	current = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
