#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @array: the array of integers to be printed
 * @length: the number of elements in the array to be printed
 *
 * Return: none
 */
void print_array(int *array, int length)
{
int i;

for (i = 0; i < (length - 1); i++)
{
printf("%d, ", array[i]);
}

if (i == (length - 1))
{
printf("%d", array[length - 1]);
}

printf("\n");
}
