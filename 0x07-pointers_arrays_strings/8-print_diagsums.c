#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: 0 Success
 */
void print_diagsums(int *a, int size)
{
int i, j, k;

i = 0;
j = 0;

for (k = 0; k < size; k++)
{
i = i + a[k * size + k];
}

for (k = size - 1; k >= 0; k--)
{
j += a[k * size + (size - k - 1)];
}
printf("%d, %d\n", i, j);
}
