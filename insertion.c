#include "sort.h"

void insertion_sort_list(listint_t **list) {
    if (!list || !(*list) || !(*list)->next)
        return;  // Empty list or single node list, no need to sort

    listint_t *ptr = (*list)->next;

    while (ptr) {
        if (ptr->prev->n > ptr->n) {
            listint_t *var_1 = ptr;
            listint_t *tmp = ptr->prev;

            *list = swap(*list, var_1, tmp);
            print_list(*list);

            while (tmp->prev && tmp->n < tmp->prev->n) {
                var_1 = tmp;
                tmp = tmp->prev;
                *list = swap(*list, var_1, tmp);
                print_list(*list);
            }
        }
        ptr = ptr->next;
    }
}

