#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: memory address
 * @b: the value desired
 * @n: number of bytes
 *
 * Return: an array with n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	while (n--)
		*ptr = b;
	return (s);
}
