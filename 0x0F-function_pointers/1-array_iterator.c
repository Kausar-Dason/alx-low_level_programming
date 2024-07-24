#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 *  parameter on each element of an array.
 * @size: the size of the array
 * @action: a pointer to the function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}


