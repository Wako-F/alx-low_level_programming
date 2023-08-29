#include "lists.h"

/**
 * pop_listint - Function that deletes head node
 * @head: pointer
 * Return: deleted data/0
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int mem;

if (!head || !*head)
	return (0);

mem = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (mem);
}
