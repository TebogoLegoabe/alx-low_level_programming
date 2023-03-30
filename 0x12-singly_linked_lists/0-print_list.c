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
	while (h)
	{
		if (!h->str)
			print("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = i->next;
		i++;
	}
	return (i);
}
