#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first variable being swaped
 * @b: second variable being swaped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
