#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 *
 * Return: print
 */
void puts2(char *str)
{
int i = 0;
int j = 0;
char *y = str;
int tmp;

while (*y != '\0')
{
y++;
i++;
}
j = i - 1;
for (tmp = 0 ; tmp <= j ; tmp++)
{
if (tmp % 2 == 0)
{
_putchar(str[tmp]);
}
}
_putchar('\n');
}
