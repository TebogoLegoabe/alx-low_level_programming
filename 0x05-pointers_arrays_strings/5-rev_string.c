#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: input string
 *
 * Return: void;
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char tmp;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		tmp = s[index];
		s[index] = s[length - index -1];
		s[length - index - 1] = tmp;
	}
}
