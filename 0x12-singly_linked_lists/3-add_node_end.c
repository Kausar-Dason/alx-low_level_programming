#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end -  a function that adds a new node at
 *		the end of a list_t list.
 * @head: a double pointer to the head f list_t
 * @str: string to be duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
	int len_str = 0;

	current = *head;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len_str])
		len_str++;

	new_node->len = len_str;
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
