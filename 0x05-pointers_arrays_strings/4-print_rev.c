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

	for (; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
