#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: storage
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (; i < n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
