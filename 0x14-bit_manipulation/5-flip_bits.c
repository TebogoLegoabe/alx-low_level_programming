#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int num_bits = 0;

	while (diff > 0)
	{
		if (diff & 1)
			num_bits++;
		diff >>= 1;
	}

	return (num_bits);
}
