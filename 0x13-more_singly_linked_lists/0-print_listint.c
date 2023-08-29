#include "lists.h"

/**
 * print_listint - function that prints elems of a linked list
 * @h: linked list to print
 * Return: no. of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t cnt = 0;

while (h)
{
	printf("%d\n", h->n);
	cnt++;
	h = h->next;
}
return (cnt);
}
