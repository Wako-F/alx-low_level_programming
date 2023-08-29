#include "lists.h"

/**
 * add_nodeint - Function that adds a node(beginning)
 * @head: pointer
 * @n: data
 * Return: pointer to the node, or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (!node)
	return (NULL);
node->n = n;
node->next = *head;
*head = node;

return (node);
}
