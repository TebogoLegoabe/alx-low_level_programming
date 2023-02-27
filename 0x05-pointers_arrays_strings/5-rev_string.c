#include "main.h"

/**
 * rev_string - function reverses a string
 * @s: input string
 *
 * Return: pointer to reversed string
 */
char *rev_string(char *s)
{
int i, j;
char temp;

if (s == NULL)
return NULL;

j = strlen(s) - 1;

for (i = 0; i < j; i++, j--)
{
temp = s[i];
s[i] = s[j];
s[j] = temp;
}

return (s);
}
