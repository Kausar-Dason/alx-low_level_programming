#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: The length of the line
 */
void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
