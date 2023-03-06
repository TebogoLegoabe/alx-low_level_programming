#include "main.h"
/**
 * _memset - fills a memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: numbe of bytes to be replaced
 *
 * Return: an array with new number bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
       
	i = 0;
	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
