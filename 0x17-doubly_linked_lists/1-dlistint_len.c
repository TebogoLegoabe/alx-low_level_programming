#include "lists.h"

/**
 * dlistint_len - the number of elements in a linked dlistint_t list.
 * @h: struct list
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		elem += 1;
		h = h->next;
	}
	return (elem);
}
