#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add element at the end of the list
 * @head: list
 * @n: element in list
 * Return: new element || NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *list;

	list = *head;
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		temp->next = NULL;
		temp->n = n;
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	while (list->next)
	{
		list = list->next;
	}
	list->next = temp;
	temp->prev = list;
	temp->next = NULL;
	temp->n = n;
	return (temp);
}
