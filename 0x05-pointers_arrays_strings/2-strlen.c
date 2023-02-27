#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
size_t _strlen(const char *s)
{
size_t len = 0;

while (s[len] != '\0')
{
len++;
}

return (len);
}
