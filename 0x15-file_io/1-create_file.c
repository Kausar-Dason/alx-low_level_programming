#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	len = 0;
	while (text_content[len] != '\0')
	{
		len++;
	}
	write(fd, text_content, len);

	close(fd);

	return (1);
}
