#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: src string to appends
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src, int n)
{
	char *ptr;
	int tmp;

	tmp = 0;
	*ptr = dest + strlen(dest);
	while (tmp < n && *src != '\0)
	{
		*ptr++ = *src++;
		tmp++;
	}
	*ptr = '\0';
	return (dust);
}
