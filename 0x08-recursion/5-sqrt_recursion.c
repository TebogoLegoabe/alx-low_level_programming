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
 * Return: The resulting square root if successful, or -1 
