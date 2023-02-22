#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0 (Success)
 *
 */

void print_9_times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
	putchar('9');
	putchar(' ');
	putchar('x');
	putchar(' ');
	putchar(i + '0');
	putchar(' ');
	putchar('=');
	putchar(' ');
	putchar((i 	putchar('\n');
	}
}
