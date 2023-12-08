#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints double linked list
 * @h: head
 * Return: numbe of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}