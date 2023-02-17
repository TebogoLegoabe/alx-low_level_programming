#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - positive anything is better than negative nothing
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	printf("n = %d\n", n);

	if (n < 0)
	printf("is negative");
	else if (n > 0)
	printf("is positive");
	else
	printf("is zero");
	return (0);
}
