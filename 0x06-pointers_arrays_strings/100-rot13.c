#include "main.h"

/**
 * rot13 - encoder rot13
 * @str: pointer to params string
 *
 * Return: ptr
 */
char *rot13(char *str) {
char *ptr;
int i;
int j;

*ptr = str;

for (i = 0; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
for (j = 0; j < 13; j++)
{
if (str[i] == 'z')
{
str[i] = 'a';
} else {
str[i]++;
}
}
} else if (str[i] >= 'A' && str[i] <= 'Z')
{
for (j = 0; j < 13; j++)
{
if (str[i] == 'Z')
{
str[i] = 'A';
} else
{
str[i]++;
}
}
}
}
return (ptr);
}
