#include "lists.h"

/**
 * print_listint - Print all the elements of a listint_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
