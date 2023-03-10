#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: input string containing the characters to match
 *
 * Return: number of characters in the initial segment of s that are in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = 0;

	while (*s && strchr(accept, *s))
	{
	n++;
	s++;
	}
	return (n);
}
