#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - UNIX is basically a simple operating system
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char message1[] = "and that piece of art is useful\" - ";
	char message2[] = "Dora Korpar, 2015-10-19\n";
	char message[128];
	ssize_t len;

	strcpy(message, message1);
	strcat(message, message2);
	len = strlen(message);

	write(STDERR_FILENO, message, len);

	return (1);
}
