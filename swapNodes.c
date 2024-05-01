#include <stdio.h>

typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void swapNodes(listint_t **head, listint_t *node1, listint_t *node2) {
    if (node1 == node2) // Nothing to swap if both nodes are the same
        return;

    if (node1->prev != NULL)
        node1->prev->next = node2;
    else
        *head = node2;

    if (node2->prev != NULL)
        node2->prev->next = node1;
    else
        *head = node1;

    if (node1->next != NULL)
        node1->next->prev = node2;

    if (node2->next != NULL)
        node2->next->prev = node1;

    // Swap prev pointers
    listint_t *tempPrev = node1->prev;
    node1->prev = node2->prev;
    node2->prev = tempPrev;

    // Swap next pointers
    listint_t *tempNext = node1->next;
    node1->next = node2->next;
    node2->next = tempNext;
}

void printList(listint_t *node) {
    while (node != NULL) {
        printf("%d ", node->n);
        node = node->next;
    }
    printf("\n");
}

int main() {
    listint_t node1 = {1, NULL, NULL};
    listint_t node2 = {2, NULL, NULL};
    listint_t node3 = {3, NULL, NULL};

    node1.next = &node2;
    node2.prev = &node1;
    node2.next = &node3;
    node3.prev = &node2;

    listint_t *head = &node1;

    printf("Original list: ");
    printList(head);

    swapNodes(&head, &node1, &node3);

    printf("List after swapping nodes 1 and 3: ");
    printList(head);

    return 0;
}

