#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int diagonal1_sum;
	int diagonal2_sum;
	int row_index;

	diagonal1_sum = 0;
	diagonal2_sum = 0;
	for (row_index = 0; row_index < size; row_index++)
	{
	diagonal1_sum += a[row_index * size + row_index];
	}
	for (row_index = size - 1; row_index >= 0; row_index--)
	{
	diagonal2_sum += a[row_index * size + (size - row_index - 1)];
	}

	printf("%d, %d\n", diagonal1_sum, diagonal2_sum);
}
