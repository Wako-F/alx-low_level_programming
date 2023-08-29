#include "lists.h"

/**
 * listint_len - Function that returns no of elems
 * @h: linked list
 * Return: no of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t cnt = 0;

while (h)
{
	cnt++;
	h = h->next;
}
return (cnt);
}
