#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes of its own fuction
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;
	int num_bytes;
	char *ptr;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
	printf("Error\n");
	return (2);
	}
	ptr = (char *) main;
	for (i = 0; i < num_bytes; i++)
	{
	printf("%02x", *(ptr + i));
	}

	return (0);
}
