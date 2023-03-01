#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: src string to appends
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr;
	
	*ptr = dest + strlen(dest);
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dust);
}
