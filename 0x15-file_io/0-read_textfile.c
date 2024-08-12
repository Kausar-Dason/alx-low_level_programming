#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints
 *		it to the POSIX standard output.
 * @filename: a pointer name of file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, brd, bw;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	brd = read(fd, buff, letters);
	bw = write(STDOUT_FILENO, buff, brd);
	if (bw == -1)
		return (0);

	free(buff);
	close(fd);

	return (bw);
}
