#include "lists.h"

/**
 * add_nodeint_end - Function that adds node(end)
 * @head: pointer
 * @n: data
 * Return: pointer to the node/NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;
listint_t *tmp = *head;

node = malloc(sizeof(listint_t));
if (!node)
	return (NULL);
node->n = n;
node->next = NULL;

if (*head == NULL)
{
	*head = node;
	return (node);
}

while (tmp->next)
	tmp = tmp->next;

tmp->next = node;

return (node);
}

