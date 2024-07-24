#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: pointer to array
 * @size: the number of elements in the array array
 * @cmp:  a pointer to the function to be used to compare values
 *
 * Return: an integer or -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
