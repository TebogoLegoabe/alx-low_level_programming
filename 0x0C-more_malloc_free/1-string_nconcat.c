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

	i = 0;
	j = 0;
	length_one = 0;
	length_two = 0;
	while (s1 && s1[length_one])
		length_one++;
	while (s2 && s2[length_two])
		length_two++;
	if (n < length_two)
		c_string = malloc(sizeof(char) * (length_one + n + 1));
	else
		c_string = malloc(sizeof(char) * (length_one + length_two + 1));

	if (!c_string)
		return (NULL);

	while (i < length_one)
	{
		c_string[i] = s1[i];
		i++;
	}
	while (n < length_two && i < (length_one + n))
		c_string[i++] = s2[j++];
	while (n >= length_two && i < (length_one + length_two))
		c_string[i++] = s2[j++];
		c_string[i] = '\0';

	return (c_string);
}
