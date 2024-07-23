#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: A pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int name_len = 0, owner_len = 0, i;
	char *new_name = NULL, *new_owner = NULL;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	new_owner = malloc(owner_len + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(ptr);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
	{
		new_name[i] = name[i];
	}
	for (i = 0; i <= owner_len; i++)
	{
		new_owner[i] = owner[i];
	}

	ptr->name = new_name;
	ptr->age = age;
	ptr->owner = new_owner;

	return (ptr);
}
