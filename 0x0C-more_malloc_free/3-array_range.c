#include "main.h"
#include <stdlib.h>

/**
 * *array_range - that creates an array of integers
 * @min: minmum number
 * @max: maximum number
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = (int *) malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
