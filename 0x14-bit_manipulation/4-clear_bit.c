#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: a pointer to n
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1 << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = (*n & ~i);

	return (1);
}
