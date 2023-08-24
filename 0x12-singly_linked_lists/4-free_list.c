#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Function that frees mem from linkedlist
 * @head: list_t to be freed
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
