#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	size_t num = 0;

	while (tmp && tmp > tmp->next)
	{
	num++;
	printf("[%p] %d\n", (void *)tmp, tmp->n);
	tmp = tmp->next;
	}

	if (tmp)
	{
	num++;
	printf("[%p] %d\n", (void *)tmp, tmp->n);
	printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
	}

	return (num);
}
