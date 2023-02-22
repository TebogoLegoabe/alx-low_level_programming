#include <stdio.h>
#include "main.h"

/**
 *_islower - check if character is lowercase.
 *
 *@c: character to check if it islowercase.
 *
 *Return: 1 if True and 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
