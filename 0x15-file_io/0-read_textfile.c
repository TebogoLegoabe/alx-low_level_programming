#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Name of file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: Actual number of bytes read and printed.
 *         0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *ptr;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (!ptr)
	{
		close(i);
		return (0);
	}

	r = read(fd, ptr, letters);
	w = write(STDOUT_FILENO, ptr, r);

	free(ptr);
	close(fd);

	return (w);
}
