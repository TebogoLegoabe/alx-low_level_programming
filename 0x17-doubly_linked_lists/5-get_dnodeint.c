#include "lists.h"

/**
 * get_dnodeint_at_index - get node by index
 * @head: list
 * @index: index of element
 * Return: element by index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; c < index && head->next; node++)
	{
		head = head->next;
	}
	if (node < index)
		return (NULL);
	return (head);
}
