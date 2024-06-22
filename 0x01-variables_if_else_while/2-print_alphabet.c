#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Printing the letters of the alphbet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	putchar('\n');

	return (0);
}
