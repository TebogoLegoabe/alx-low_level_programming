#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 *
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = n, mask = 1;
	int j = 0;

	while (i > 0)
	{
		j++;
		i >>= 1;
	}
	j -= 1;

	if (j > 0)
		mask = mask << j;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
