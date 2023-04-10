#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: On success, returns 1.
 *         On failure, returns -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, text_len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
