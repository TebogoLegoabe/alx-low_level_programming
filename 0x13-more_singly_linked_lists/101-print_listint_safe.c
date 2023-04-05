
#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: list of type listint_t
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t sum = 0;
long int tmp;

while (head)
{
	tmp = head - head->next;
	sum++;
	printf("[%p] %d\n", (void *)head, head->n);
	if (temp > 0)
	head = head->next;
	else
	{
	printf("-> [%p] %d\n", (void *)head->next, head->next->n);
	break;
	}
}

return (sum);
}
