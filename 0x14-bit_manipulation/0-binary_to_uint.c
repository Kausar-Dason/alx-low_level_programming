#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary
 *		number to an unsigned int.
 * @b: points to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int sum = 0;
	int len = 0;
	int base = 1;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
		len++;

	for (n = len - 1; n >= 0; n--)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);

		sum = sum + (b[n] - '0') * base;
		base = base * 2;
	}
	return (sum);
}
