"variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - prints string, followed by a new line
 * @separator: string to be printed between the strings
 * @n: is the number of strings
 *
 * Return: 0 (Success)
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
