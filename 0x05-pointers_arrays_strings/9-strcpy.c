#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: the buffer to which the string is to be copied
 * @src: the string to be copied
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int src_len = 0;
int i = 0;

while (*(src + src_len) != '\0')
{
src_len++;
}

for (; i < src_len; i++)
{
dest[i] = src[i];
}

dest[src_len] = '\0';

return (dest);
}
