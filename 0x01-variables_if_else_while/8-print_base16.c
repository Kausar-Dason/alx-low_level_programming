#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Printing all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex;

	for (hex = '0'; hex <= 'f'; hex++)
		putchar(hex);
	putchar('\n');

	return (0);
}
