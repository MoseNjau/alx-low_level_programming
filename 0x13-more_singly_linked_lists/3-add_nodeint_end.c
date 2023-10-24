#include "lists.h"
/**
 * add_nodeint_end - Add a new node at the end of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: The value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *ptr = NULL;
    listint_t *tempo = NULL;

    tempo = malloc(sizeof(listint_t));
    if (tempo == NULL)
        return NULL;

    tempo->n = n;
    tempo->next = NULL;

    if (*head == NULL)
    {
        *head = tempo;
    }
    else
    {
        ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = tempo;
    }
	return (tempo);
}