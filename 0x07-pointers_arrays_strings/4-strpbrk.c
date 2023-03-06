#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the first occurrence in the string s of any of the bytes
 *         in the string accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		{
		return (s);
		}
	}
	s++;
	}
	return (NULL);
}
