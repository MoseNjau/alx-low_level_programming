#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to the head of the list
 * @n: value to set in the new node
 * Return: address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new, *current;

    if (head == NULL)
        return (NULL);

    new = (dlistint_t *)malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if (*head == NULL)
    {
        *head = new;
        return (new);
    }

    current = *head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = new;
    new->prev = current;

    return (new);
}
