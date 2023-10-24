#include "lists.h"
/**
 * listint_len - Count the number of elements in a linked listint_t list
 * @h: A pointer to the head of the linked list
 *
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;

    if (h == NULL)
    {
        printf("Empty linked list");
    }

    const listint_t *str = h;
    while (str != NULL)
    {
        count++;
        str = str->next;
    }
    return (count);
}