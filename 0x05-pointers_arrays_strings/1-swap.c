#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: - value to be swapped
 * @b: - value to swap
 * This function swaps the values of the two integers pointed by a and b
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
