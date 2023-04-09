#include <iostream>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (num);

	while (b[i] != '\0')
		i++;
	i -= 1;

	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (num);

		if (b[j] == '1')
			num += (1 * (1 << i));
		j++;
		i--;
	}

	return (num);
}
