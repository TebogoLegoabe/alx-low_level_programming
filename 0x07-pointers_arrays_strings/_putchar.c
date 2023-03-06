#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character c to stdout
 * @c: the character to print
 *
 * Return: 0n Success 1.
 * 0n error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
