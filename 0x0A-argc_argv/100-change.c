#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
	int cents;

	cents = atoi(argv[1]);
	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	int coins[];
	int num_coins;

	coins[] = {25, 10, 5, 2, 1};
	num_coins = 0;
	for (int i = 0; i < 5; i++)
	{
	num_coins += cents / coins[i];
	cents %= coins[i];
	}
	printf("%d\n", num_coins);

	return (0);
}
