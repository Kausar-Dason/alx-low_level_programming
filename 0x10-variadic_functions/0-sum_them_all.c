#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of variables
 *
 * Return: sum of variables
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a = 0;
	int sum = 0;

	va_start(ap, n);

	while (a < n)
	{
		sum = sum + va_arg(ap, int);
		a++;
	}
	va_end(ap);
	return (sum);
}
