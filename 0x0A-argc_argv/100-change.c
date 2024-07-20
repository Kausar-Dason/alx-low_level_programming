#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int coins, cents;
	int i;
	char coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i <= 5 && cents > 0; i++)
	{
		while (cents >= coin_values[i])
		{
			cents = cents - coin_values[i];
		}
		coins++;
	}
	printf("%d", coins);
	printf("\n");

	return (0);
}


