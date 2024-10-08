#include "main.h"

/**
 * _pow_recursion -  a function that returns the value of powers
 * @x: the base variable
 * @y: the exponent variable
 *
 * Return: value of x raised to the power y, or -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
