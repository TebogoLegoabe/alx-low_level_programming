#include <stdio.h>
#include <stdlib.h>

void errors(void)
{
printf("Error\n");
exit(98);
}

int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

int main(int argc, char *argv[])
{
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
errors();

int len1 = 0, len2 = 0;
while (argv[1][len1])
len1++;
while (argv[2][len2])
len2++;

int len = len1 + len2 + 1;
int *result = calloc(len, sizeof(int));
if (!result)
return (1);

for (int i = len1 - 1; i >= 0; i--)
{
int digit1 = argv[1][i] - '0', carry = 0;
for (int j = len2 - 1; j >= 0; j--)
{
int digit2 = argv[2][j] - '0';
carry += result[i + j + 1] + (digit1 * digit2);
result[i + j + 1] = carry % 10;
carry /= 10;
}
if (carry)
result[i] += carry;
}

int i = 0;
while (result[i] == 0 && i < len - 1)
i++;
if (i == len - 1 && result[i] == 0)
_putchar('0');
else
{
for (; i < len; i++)
_putchar(result[i] + '0');
}
_putchar('\n');

free(result);
return (0);
}
