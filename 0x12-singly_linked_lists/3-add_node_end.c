#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Function that adds new node end
 * @head: double pointer
 * @str: string
 * Return: address of new elem
 */

list_t *add_node_end(list_t **head, const char *str)
{
int cnt = 0;
list_t *node = malloc(sizeof(list_t));
list_t *tmp = *head;

while (str[cnt])
	cnt++;
if (node == NULL)
	return (NULL);
node->str = strdup(str);
node->len = cnt;
node->next = NULL;
if (*head == NULL)
{
	*head = node;
	return (node);
}
while (tmp->next != NULL)
	tmp = tmp->next;
tmp->next = node;
return (node);
}
