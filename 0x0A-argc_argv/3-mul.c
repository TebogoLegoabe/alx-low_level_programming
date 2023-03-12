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

/**
* main - multiplies two numbers
*
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
int result;

if (argc != 2)
{
printf("Error\n");
return (1);
}

result = _mul(argv[1]);

if (result == 0)
{
printf("Error\n");
return (1);
}

printf("%d\n", result);

return (0);
}
