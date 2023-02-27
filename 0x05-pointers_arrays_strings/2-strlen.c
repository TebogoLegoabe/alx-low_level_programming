#include "main.h"

/**
 *strlen - returns the length of a string
 *@s: strin
 *
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while(*s != '\0')
	{
		_putchar(*s);
		s++;
		length++;
	}
	return length;
}
