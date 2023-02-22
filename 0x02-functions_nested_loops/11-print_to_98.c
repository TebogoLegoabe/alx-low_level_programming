#include <stdio.h>

/**
* print_to_98 - Prints all natural numbers
* from n to 98.
*
* @num: input number.
*
* Return: no return.
*/
void print_to_98(int num)
{
if (num > 98)
{
for (; num > 98; num--)
{
printf("%d, ", num);
}
}
else if (num < 98)
{
for (; num < 98; num++)
{
printf("%d, ", num);
}
}
printf("%d\n", num);
}
