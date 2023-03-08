#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input integer
 *
 * Return: suare root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	
	int base, upper;

	base = _sqrt_recursion(n / 4) * 2;
	upper = base + 1;
	if (upper * upper > n)
	{
		return (base);
	}
	else
		return upper;

}

