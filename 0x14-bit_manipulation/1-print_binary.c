#include <unistd.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: number to be printed in binary form
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char bit;

	if (n > 1)
		print_binary(n >> 1);
	bit = (n & 1) + '0';

	write(1, &bit, 1);
}
