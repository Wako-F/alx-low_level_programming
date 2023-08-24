#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Function that returns no. of elems
 * @h: pointer
 * Return: no of elems
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
