#include <stdio.h>

/**
 * main - i sometimes suffer from insomnia
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;
	char alpha;

	for (number = 0; number < 10; number++)
	{
	int digit;
	int divisor;
	char alpha;

	divisor = 1;
	while (number / divisor >= 10)
	{
	divisor *= 10;
	}
	while (divisor > 0)
	{
	digit = (number / divisor) % 10;
	putchar('0' + digit);
	divisor /= 10;
	}
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}
