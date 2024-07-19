#include <stdlib.h>

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int ptr_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr_size = nmemb * size;
	ptr = malloc(ptr_size);
	if (ptr == NULL)
		return (NULL);
	while (i < ptr_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
