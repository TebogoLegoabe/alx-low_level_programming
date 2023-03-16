#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
void _puts(char *s);
int _isdigit(int c);
void print_error(void);
void multiply(char *num1, char *num2);
/**
 * main - Multiplies two positive numbers
 * @argc: The number of arguments
 * @argv: The arguments passed to the program
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		print_error();
		return (98);
	}

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				print_error();
				return (98);
			}
		}
	}

	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _puts - Prints a string to stdout
 * @s: The string
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
}

/**
 * _isdigit - Checks if a character is a digit
 * @c: The character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * print_error - Prints an error message to stderr
 */
void print_error(void)
{
	_puts("Error\n");
}

/**
 * multiply - Multiplies two numbers
 * @num1: The first number
 * @num2: The second number
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, n1, n2, sum, k;
	int *result;

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
	{
		print_error();
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry)
			result[i + j + 1] = carry;
	}

	k = 0;
	while (result[k] == 0 && k < len1 + len2 - 1)
		k++;

	for (; k < len1 + len2; k++)
		_putchar(result[k] + '0');

	_putchar('\n');
	free(result);
}
