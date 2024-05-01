#include "sort.h"

listint_t *swap(listint_t *head, listint_t *list_a, listint_t *list_b)
{
    if (list_a == NULL || list_b == NULL || list_a == list_b)
        return head;

    // Adjust prev pointers
    if (list_a->prev != NULL)
        list_a->prev->next = list_b;
    else
        head = list_b;

    if (list_b->prev != NULL)
        list_b->prev->next = list_a;
    else
        head = list_a;

    // Adjust next pointers
    if (list_a->next != NULL)
        list_a->next->prev = list_b;
    if (list_b->next != NULL)
        list_b->next->prev = list_a;

    // Swap prev pointers
    listint_t *tmp = list_a->prev;
    list_a->prev = list_b->prev;
    list_b->prev = tmp;

    // Swap next pointers
    tmp = list_a->next;
    list_a->next = list_b->next;
    list_b->next = tmp;

    return head;
}

