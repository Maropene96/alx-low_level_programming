#include "lists.h"

/**
 * add_nodeint - add a new node
 * @head:head of pointer
 * @n:num of elements
 * Return: the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnodes;

	newnodes = malloc(sizeof(listint_t));

	if (newnodes == NULL)
		return (NULL);

	newnodes->n = n;
	newnodes->next = *head;
	*head = newnodes;

	return (*head);
}
