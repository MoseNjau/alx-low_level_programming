#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given position in a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to be deleted (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (*head == NULL || index > listint_len(*head))
    {
        return (-1);
    }

    if (index == 0)
    {
        listint_t *temp = *head;
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    listint_t *current = *head;
    listint_t *prev = NULL;

    while (index > 0)
    {
        prev = current;
        current = current->next;
        index--;
    }

    prev->next = current->next;
    free(current);

    return (1);
}
