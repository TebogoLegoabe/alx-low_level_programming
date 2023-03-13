#include <stdlib.h>
#include "main.h"

/**
 * count_words - helper function to count the number of words in a string
 * @str: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
int flag, count, i;

flag = 0;
count = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ')
{
flag = 0;
}
else if (flag == 0)
{
flag = 1;
count++;
}
}
return (count);
}

/**
* strtow - splits a string into words
* @str: string to split
*
* Return: pointer to an array of strings (Success)
*         or NULL (Error)
*/
char **strtow(char *str)
{
char **words_array, *temp_word;
int i, string_length, word_count, start, end;

tmp = 0;
string_length = 0;
word_count = 0;
word_length = 0;
start = 0;
end = 0;

while (*(str + string_length))
{
string_length++;
}
word_count = count_words(str);

if (word_count == 0)
{
return (NULL);
}
words_array = (char **) malloc(sizeof(char *) * (word_count + 1));
if (words_array == NULL)
{
return (NULL);
}
for (i = 0; i <= string_length; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (word_length)
{
end = i;
temp_word = (char *) malloc(sizeof(char) * (word_length + 1));
if (temp_word == NULL)
{
return (NULL);
}
while (start < end)
{
*temp_word++ = str[start++];
}

*temp_word = '\0';

words_array[tmp] = temp_word - word_length;
tmp++;
word_length = 0;
}
}
else if (word_length++ == 0)
{
start = i;
}
}
words_array[tmp] = NULL;
return (words_array);
}
