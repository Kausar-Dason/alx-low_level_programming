#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: The buffer to copy the string to
 * @src: The string to be copied
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (original_dest);
}
