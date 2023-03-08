#include "main.h"

/**
 * is_prime_number - checks if a given integer is prime
 *
 * @n: the integer to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
if (n == 2 || n == 3)
{
return (1);
}

if (n % 2 == 0 || n % 3 == 0)
{
return (0);
}

int limit = sqrt(n);

return (check_divisor(n, 5, limit));
}

/**
* check_divisor - recursively checks if n is divisible by any odd number
*                  greater than 3 and less than or equal to limit
*
* @n: the integer to check
* @divisor: the current divisor being tested
* @limit: the largest potential divisor to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int check_divisor(int n, int divisor, int limit)
{
if (divisor > limit)
{
return (1);
}
if (n % divisor == 0 || n % (divisor + 2) == 0)
{
return (0);
}
return (check_divisor(n, divisor + 6, limit));
}
