#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
int i = 0;
int sign_count = 0;
int num = 0;
int len = 0;
int found_digit = 0;
int digit = 0;

while (s[len] != '\0')
len++;

while (i < len && found_digit == 0)
{
if (s[i] == '-')
++sign_count;

if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';

if (sign_count % 2)
digit = -digit;

num = num * 10 + digit;
found_digit = 1;

if (s[i + 1] < '0' || s[i + 1] > '9')
break;

found_digit = 0;
}
i++;
}

if (found_digit == 0)
return (0);

return (num);
}
