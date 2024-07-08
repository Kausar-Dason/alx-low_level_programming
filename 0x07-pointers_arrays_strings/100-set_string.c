#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to update
 * @to: string to set pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
