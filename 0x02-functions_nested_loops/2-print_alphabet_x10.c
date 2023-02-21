#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lowercase 10 times.
 *
 * Return: 0 (Success)
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
	}
}
