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
	char rev;
	int i, j;
	
	rev = s[0];
	j = 0;

	while (s[j] != '\0')
	{
		j++;
		for (i =0;i < j; i++)
		{
			j--;
			rev = s[i];
		s[i] = s[j];
		s[j] = rev;
		}
	}
}
