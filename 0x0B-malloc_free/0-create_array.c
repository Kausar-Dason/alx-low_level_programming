#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars
 * @size: size of array
 * @c: variable
 *
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count = 0;

	ptr = malloc (size * sizeof(char));
	
	while (count < size)
	{
		ptr[count] = c;
		count++;
	}
	
	return (ptr);
}
