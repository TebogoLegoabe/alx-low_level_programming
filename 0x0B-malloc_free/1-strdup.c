#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: a pointer to a newly allcocated space in memory
 */
char _strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	*new_str = malloc(strlen(str) + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
