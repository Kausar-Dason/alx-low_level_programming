#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: a pointer variable
 * @f: a pointer to the function print_name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
