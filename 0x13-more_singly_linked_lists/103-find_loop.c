#include "lists.h"

/**
 * find_listint_loop - Finds a loop in a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slowMove = head;
    listint_t *fast = head;

    while (slowMove != NULL && fast != NULL && fast->next != NULL)
    {
        slowMove = slowMove->next;
        fast = fast->next->next;
        if (slowMove == fast)
        {
            slowMove = head;

            while (slowMove != fast)
            {
                slowMove = slowMove->next;
                fast = fast->next;
            }
			
			return (slowMove);
        }
    }

return (NULL);
}
