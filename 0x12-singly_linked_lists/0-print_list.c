#include "lists.h"
#include <stdlib.h>
#include <string>
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] Cnil)\n");
		}
		i++;
		h = i->next;
	}
	return (i);
}
