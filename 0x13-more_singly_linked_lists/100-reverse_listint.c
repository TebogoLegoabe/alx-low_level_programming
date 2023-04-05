#include "lists.h"

/**
 * listint_t - function that reserses  a listint_t linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL,
	*current = *head,
	*next = NULL;

	while (current != NULL)
	{
	next = current->next;
	current->next = prev;
	prev = current;
	current = next;
	}

	*head = prev;

	return (*head);
}
