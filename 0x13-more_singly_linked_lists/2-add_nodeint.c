#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @n: The value to be added to the new node
 *
 * Return: The address of the new element, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *ptr = NULL;
    ptr = malloc(sizeof(listint_t));
    if (ptr == NULL)
    {
        return NULL;
    }
    ptr->n = n;
    ptr->next = NULL;

    ptr->next = *head;
    *head = ptr;

    return (ptr);

}