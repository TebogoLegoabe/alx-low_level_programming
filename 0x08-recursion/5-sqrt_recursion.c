#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * 
 * Given a non-negative integer 'n', the function recursively calculates
 * its square root using the following formula:
 * 
 *     sqrt(n) = sqrt(n - 1) + 1
 * 
 * If the input number is negative, the function returns -1.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root if successful, or -1 if 'n' is negative.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_recursion(n, 0));
}

/**
* actual_sqrt_recursion - Recursively calculates the natural square root 
*
* @n: The number to calculate the square root of.
* @i: Iterator.
*
* Return: The resulting square root if successful, or -1 if 'n' is negative.
*/
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (actual_sqrt_recursion(n, i + 1));
}
