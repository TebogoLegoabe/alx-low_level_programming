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
	unsigned int i, j, length_one, length_two;

	length_one = 0;
	length_two = 0;
	if (s1)
	{
	while (s1[length_one])
	length_one++;
	}
	if (s2)
	{
	while (s2[length_two] && length_two < n)
	length_two++;
	}
	c_string = malloc(sizeof(char) * (length_one + length_two + 1));
	if (!c_string)
	return (NULL);
	for (i = 0; i < length_one; i++)
	c_string[i] = s1[i];

	for (j = 0; j < length_two; j++)
	c_string[i + j] = s2[j];
	c_string[i + j] = '\0';
	return (c_string);
}
