#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_replace[10] = "aAeEoOtTlL";
	char leet_encode[10] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (leet_replace[j] != '\0')
		{
			if (str[i] == leet_replace[j])
			{
				str[i] = leet_encode[j / 2];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
