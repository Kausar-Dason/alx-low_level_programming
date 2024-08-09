#include "main.h"

/**
 * flip_bits -  a function that returns the number of bits you would
 *		need to flip to get from one number to another.
 * @n: the number
 * @m: number to flip to
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count;

	for (count = 0; xor > 0; xor >>= 1)
	{
		count = count + (xor & 1);
	}

	return (count);
}
