#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: A pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *toFree;

	while (head != NULL)
	{
		toFree = head;
		head = head->next;
		free(toFree);
	}
	
}