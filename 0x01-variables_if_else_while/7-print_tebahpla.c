#include <stdio.h>

/**
 * main - Entry
 *
 * Description: printing the lowercase alphabets in reverse order
 *
 * Return: Always 0 ((Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
