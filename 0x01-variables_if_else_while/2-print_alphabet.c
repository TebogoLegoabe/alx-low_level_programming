#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
	putchar(letter);
	putchar(letter == 'z' ? '\n' : ' ');
	}

	return (0);
}
