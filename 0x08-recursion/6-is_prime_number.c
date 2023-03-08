#include "main.h"

int recursive_square_root(int n, int iterator);

/**
 * get_square_root - returns the square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the resulting square root
 */
int get_square_root(int n)
{
if (n < 0)
return (-1);
return (recursive_square_root(n, 0));
}

/**
* recursive_square_root - recursively finds the square root of a number
* @n: the number to calculate the square root of
* @iterator: an iterator used to calculate the square root
*
* Return: the resulting square root
*/
int recursive_square_root(int n, int iterator)
{
if (iterator * iterator > n)
return (-1);
if (iterator * iterator == n)
return (iterator);
return (recursive_square_root(n, iterator + 1));
}
