#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list and sets the head to NULL
 * @h: A pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *ptr = *h;
    listint_t *next;

    while (ptr != NULL)
    {
        size++;
        next = ptr->next;
        free(ptr);
        ptr = next;

        if (next == *h)
        {
            *h = NULL;
            break;
        }
    }

    return (size);
}
