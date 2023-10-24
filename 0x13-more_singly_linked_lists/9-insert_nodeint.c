#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index where the new node should be added (starting at 0)
 * @n: The value to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *ptr = malloc(sizeof(listint_t));
    listint_t *current = *head;

    if (ptr == NULL)
    {
        return (NULL);
    }

    ptr->n = n;
    ptr->next = NULL;

    if (idx == 0)
    {
        ptr->next = *head;
        *head = ptr;
        return (ptr);
    }

    while (current != NULL && idx > 1)
    {
        current = current->next;
        idx--;
    }

    if (current == NULL)
    {
        free(ptr);
        return (NULL);
    }

    ptr->next = current->next;
    current->next = ptr;

    return (ptr);
}
