#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: cp file_from file_to\n");
        return (97);
    }

    int fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        printf("Error: Can't read from file %s\n", argv[1]);
        return (98);
    }

    int fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        printf("Error: Can't write to %s\n", argv[2]);
        return (99);
    }

    char buffer[1024];
    ssize_t bytes_read, bytes_written;

    do {
        bytes_read = read(fd_from, buffer, sizeof(buffer));
        if (bytes_read == -1)
        {
            printf("Error: Can't read from file %s\n", argv[1]);
            close(fd_from);
            close(fd_to);
            return (98);
        }

        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            printf("Error: Can't write to %s\n", argv[2]);
            close(fd_from);
            close(fd_to);
            return (99);
        }

    } while (bytes_read > 0);

    close(fd_from);
    close(fd_to);

    return (0);
}
