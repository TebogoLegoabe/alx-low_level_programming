#include "main.h"

int check_pal(char *s, int i, int j);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);

return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
* _strlen_recursion - returns the length of a string
* @s: string to calculate the length of
*
* Return: length of the string
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(s + 1));
}

/**
* check_pal - recursively checks if a string is a palindrome
* @s: string to check
* @i: starting index of the string
* @j: ending index of the string
*
* Return: 1 if it is a palindrome, 0 otherwise
*/
int check_pal(char *s, int i, int j)
{
if (s[i] != s[j])
return (0);

if (i >= j)
return (1);

return (check_pal(s, i + 1, j - 1));
}
