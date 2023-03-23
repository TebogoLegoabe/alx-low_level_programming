#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers,followed by new line
 * @separator: string to printed between the numbers
 * @n: number of integers passed
 *
 * Return: 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));

	if (i != (n - 1) && seperator != NULL)
		printf("%s", seperator);
	}
	printf("\n");
	va_end(ptr);
}