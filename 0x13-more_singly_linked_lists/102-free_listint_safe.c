#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *tmp, *prev;

	while (*h)
	{
	tmp = *h;
	*h = (*h)->next;

	if (tmp == prev)
	break;

	free(tmp);
	prev = tmp;
	len++;
	}

	*h = NULL;
	return (len);
}
