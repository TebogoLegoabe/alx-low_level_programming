#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: store
 * @src: memory where is copied
 * @n: number of bytes
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	for (; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
