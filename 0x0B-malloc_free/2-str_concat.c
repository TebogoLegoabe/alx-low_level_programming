#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string_one
 * @s2: string_two
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char * results;
	size_t string_length1;
	size_t string_length2;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
       
	string_length1 = strlen(s1);
	string_length2 = strlen(s2);

	results = (char *)malloc(string_length1 + string_length2 + 1);
	if (!results)
	{
		return (NULL);
	}
	memcpy(results, s1, string_length1);
	memcpy(results + string_length1, s2, string_length2 + 1);

	results[string_length1 + string_length2] = '\0';

	return (results);
}
