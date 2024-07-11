#include "main.h"

/**
 * _is_prime - Helper function to check for prime number
 * @n: The number to check
 * @i: The current divisor being tested
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int _is_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((i * i) > n)
	{
		return (1);
	}
	return (_is_prime(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: The number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
