#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: integer
 *
 * Return: pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	size_t length_s1;
	size_t length_s2;

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	if (n >= length_s2)
	{
		n = length_s2;
	}
	c_string = malloc((length_s1 + n + 1) * sizeof(char));
	if (c_string == NULL)
	{
		return (NULL);
	}
	strcpy(c_string, s1);
	strcpy(c_string, s2, n);

	c_string[string_s1 + n] = '\0';
	return (c_string);
}
