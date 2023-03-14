#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * count_words - count the number of words in a string
 * @str: input string
 *
 * Return: number of words in the string
 */
int count_words(char *str)
{
	int count = 0;

	while (*str)
	{
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
			count++;
		str++;
	}

	return (count);
}

/**
 * strtow - split a string into words
 * @str: input string
 *
 * Return: array of strings (Success), NULL (Error)
 */
char **strtow(char *str)
{
	char **words, *tmp;
	int i, j, k, count = 0, word_length = 0;

	if (!str || !*str)
		return (NULL);

	count = count_words(str);
	if (!count)
		return (NULL);

	words = malloc(sizeof(char *) * (count + 1));
	if (!words)
		return (NULL);

	for (i = 0, j = 0; str[i] && j < count; i++)
	{
		if (str[i] != ' ')
		{
			word_length++;
			if (word_length == 1)
				k = i;
		}
		if ((str[i + 1] == ' ' || str[i + 1] == '\0') && word_length)
		{
			tmp = malloc(sizeof(char) * (word_length + 1));
			if (!tmp)
			{
				while (--j >= 0)
					free(words[j]);
				free(words);
				return (NULL);
			}
			strncpy(tmp, &str[k], word_length);
			tmp[word_length] = '\0';
			words[j] = tmp;
			j++;
			word_length = 0;
		}
	}
	words[j] = NULL;

	return (words);
}
