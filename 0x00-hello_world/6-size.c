#include <stdio.h>

/**
 * main - Size is not grander, and territory does not make a nation
 *
 * Retuen: 0 (Success)
 */
int main(void)
{

char a;
int b;
long int c;
float d;
long long e;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long: %lu byte(s)\n", (unsigned long)sizeof(e));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(d));
return (0);
}
