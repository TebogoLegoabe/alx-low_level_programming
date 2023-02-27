#include "main.h"

/**
 * rev_string - function reverses a string
 *
 * @s: string
 *
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int length;
	int i, j;

	length = strlen(s);
	char temp;
	for (i = 0,j = length - 1;i < j;i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
