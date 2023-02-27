#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	
	int j;

	for (j = i-1;j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
