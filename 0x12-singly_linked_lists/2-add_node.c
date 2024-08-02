#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the
 *		beginning of a list_t list.
 * @head: a pointer to the head of list_t list
 * @str: a string to be duplicated and added to a new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int len_str = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[len_str])
	{
		len_str++;
	}

	new_node->len = len_str;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
