#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: lists the type of linked list
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
size_t numnodes = 0;

while (h)
{
printf("%d\n", h->n);
numnodes++;
h = h->next;
}
return (numnodes);
}
