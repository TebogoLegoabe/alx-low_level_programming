#include "main.h"

/**
* _isalpha-check if character is lowercase or uppercase
*
* @c:character to check if it's lowercase.
*
* Return:1 if lowercase/uppercase,0 otherwise.
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
