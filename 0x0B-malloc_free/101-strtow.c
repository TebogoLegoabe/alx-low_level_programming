#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - splits a string into words
 * @str: string
 *
 * Return: a pointer to an array of strings or
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int word_count;
	char *test;
	char *spt;

	if (str == NULL || str == "")
	{
		return (NULL);
	}
	words = malloc(sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_count = 0;
	test = strtok(str, " ");
	while (test != NULL)
	{
		spt = realloc(words, (word_count + 2) * sizeof(char *));
		if (spt == NULL)
		{
			free(words);
			return (NULL);
		}
		words = spt;
		words[word_count++] = strdup(test);
		test = strtok(NULL, " ");
	}
	words[word_count] = NULL;
	return (words);
}
