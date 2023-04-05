#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: linked list to search
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	if (!head)
	return (NULL);

	listint_t *slow = head;
	listint_t *fast = head->next;

	while (fast != NULL && fast->next != NULL && fast != slow)
	{
	slow = slow->next;
	fast = fast->next->next;
	}
	if (fast == NULL || fast->next == NULL)
	return (NULL);

	slow = head;

	while (slow != fast->next)
	{
	slow = slow->next;
	fast = fast->next;
	}

	return (fast->next);
}
