#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list and counts the nodes
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *ptr = head;

    while (ptr != NULL)
    {
        count++;
        printf("[%p] %d\n", (void *)ptr, ptr->n);
        ptr = ptr->next;

        if (ptr == NULL)
        {
            exit(98);
        }
    }

    return (count);
}
