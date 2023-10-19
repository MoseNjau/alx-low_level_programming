#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

/* Structure to represent a node in a linked list */
typedef struct list_s {
    char *str;            /* Pointer to a string */
    unsigned int len;     /* Length of the string */
    struct list_s *next;  /* Pointer to the next node */
} list_t;

#endif /* LISTS_H */
