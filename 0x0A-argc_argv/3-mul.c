#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mul);
	}
	printf("\n");

	return (0);
}

