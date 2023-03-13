#include "main.h"
#include <stdlib.h>

/**
 * char - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: character
 *
 * Return: NULL if size = 0 || a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size *(char));
	if (array == NULL)
	{
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
