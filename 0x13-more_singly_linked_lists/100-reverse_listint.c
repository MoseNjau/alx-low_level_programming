#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list in place
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *nowNode = *head;
    listint_t *next;

    while (nowNode != NULL)
    {
        next = nowNode->next;

        nowNode->next = prev;

        prev = nowNode;
        nowNode = next;
    }

    *head = prev;

    return (*head);
}
