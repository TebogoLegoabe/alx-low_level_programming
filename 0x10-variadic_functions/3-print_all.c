#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a char
 * @list: list of arguments
 * @str: string to print before the argument
 */
void print_char(va_list list, char *str)
{
	printf("%s%c", str, va_arg(list, int));
}

/**
 * print_int - prints an int
 * @list: list of arguments
 * @str: string to print before the argument
 */
void print_int(va_list list, char *str)
{
	printf("%s%d", str, va_arg(list, int));
}

/**
 * print_float - prints a float
 * @list: list of arguments
 * @str: string to print before the argument
 */
void print_float(va_list list, char *str)
{
	printf("%s%f", str, va_arg(list, double));
}

/**
 * print_string - prints a string
 * @list: list of arguments
 * @str: string to print before the argument
 */
void print_string(va_list list, char *str)
{
	char *ptr = va_arg(list, char *);

	if (!ptr)
		ptr = "(nil)";
	printf("%s%s", str, ptr);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str = "";

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				print_char(list, str);
				break;
			case 'i':
				print_int(list, str);
				break;
			case 'f':
				print_float(list, str);
				break;
			case 's':
				print_string(list, str);
				break;
			default:
				i++;
				continue;
		}
		str = ", ";
		i++;
	}

	printf("\n");
	va_end(list);
}
