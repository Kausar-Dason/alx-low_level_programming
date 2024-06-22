#include <stdio.h>

/**
 * main - Entry
 *
 * Description: Printing the lower and uppercase letters using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char LETTER;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
		putchar(LETTER);
	putchar('\n');

	return (0);
}	
