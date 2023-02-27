#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a - value to be swapped
 * @b - value to swap
 *
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
