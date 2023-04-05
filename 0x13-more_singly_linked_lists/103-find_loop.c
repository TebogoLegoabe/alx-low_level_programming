#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: A pointer to the head
 *
 * Return: If there is no loop - NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *tmp, *hare;

if (head == NULL || head->next == NULL)
return (NULL);

tmp = head->next;
hare = (head->next)->next;

while (hare)
{
if (tmp == hare)
{
tmp = head;

while (tmp != hare)
{
tmp = tortoise->next;
hare = hare->next;
}

return (tmp);
}
tmp = tmp->next;
hare = (hare->next)->next;
}
return (NULL);
}
