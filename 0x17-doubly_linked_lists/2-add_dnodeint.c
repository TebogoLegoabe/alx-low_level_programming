#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add new element at beginiing of list
 * @head: pointer
 * @n: element in list
 * Return: new Element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->next = *head;
	temp->n = n;
	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;
	return (temp);
}
