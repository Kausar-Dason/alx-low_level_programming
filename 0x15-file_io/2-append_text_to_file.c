#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: name of file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (len = 0; text_content[len] != '\0'; len++)
		;

	write(fd, text_content, len);

	return (1);
}
