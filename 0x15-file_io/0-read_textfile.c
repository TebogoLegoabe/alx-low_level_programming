#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and prints the contents of a file to standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read and printed, or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (!filename)
		return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char *buffer = malloc(letters * sizeof(char));
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	ssize_t bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytes_written);
}
