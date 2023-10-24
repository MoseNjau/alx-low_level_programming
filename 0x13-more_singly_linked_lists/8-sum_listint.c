#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list
 * @head: A pointer to the head of the list
 *
 * Return: The sum of all data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *ptr = head;

    while (ptr != NULL)
    {
        sum += ptr->n;
        ptr = ptr->next;
    }

    return (sum);
}
