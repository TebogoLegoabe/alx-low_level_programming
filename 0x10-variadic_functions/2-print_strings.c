#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between string.
 * @n: The number of string passed to the function.
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
char *ptr;
unsigned int i;

va_start(string, n);

for (i = 0; i < n; i++)
{
ptr = va_arg(string, char *);

if (ptr == NULL)
printf("(nil)");
else
printf("%s", ptr);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(string);
}
