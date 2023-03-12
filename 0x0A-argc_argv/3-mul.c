#include <stdio.h>
#include "main.h"

/**
 * _mul - multiplies two numbers
 *
 * @s: string to be converted
 *
 * Return: the result of multiplying two numbers
 */
int _mul(char *s)
{
int i, n, len, num1 = 0, num2 = 0, f = 0;
len = 0;

while (s[len] != '\0')
len++;

for (i = 0; i < len; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
if (!f)
{
num1 = (num1 * 10) + (s[i] - '0');
}
else
{
num2 = (num2 * 10) + (s[i] - '0');
}
}
else if (s[i] == ' ')
{
continue;
}
else if (s[i] == '*')
{
f = 1;
}
else
{
return (0);
}
}

return (num1 *num2);
}
