#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Function that adds new node at begining
 * @head: double pointer
 * @str: string
 * Return: address of new elem
 */

list_t *add_node(list_t **head, const char *str)
{
	int cnt = 0;
	list_t *node = malloc(sizeof(list_t));

	while (str[cnt])
		cnt++;

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = cnt;
	node->next = (*head);

	*head = node;
	return (node);
}
