#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers, starting with 1 and 2
*
* Return: 0 (Success)
*/
int main(void)
{
int n = 50;
long long a, b, c;

b = 2;
a = 1;
printf("%lld, %lld", a, b);

i = 2;
for (i = 2; i < n; i++)
{

c = a + b;

printf(", %lld", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
