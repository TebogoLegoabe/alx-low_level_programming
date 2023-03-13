#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: an argument int
 * @av: an argument char
 *
 * Return: NULL if ac == 0 or av == NULL ||
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, count;
	int total_length;
	char *results;

	count = 0;
	total_length = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	results = (char *)malloc((total_length + 1) * sizeof(char));
	if (results == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			results[count++] = av[i][j];
		}
		results[count++] = '\n';
	}
	results[count] = '\0';
	return (results);
}
