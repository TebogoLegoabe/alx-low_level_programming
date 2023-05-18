#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: list
 * Return: 0 (Success)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *list, *temp;

	list = head;
	while (list != NULL)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
