#include <stdlib.h>
#include "sort.h"


/**
 * traverse_back_and_forth - Traverses a doubly linked list back and forth
 * @list: A pointer to the head of the doubly linked list
 */
void traverse_back_and_forth(listint_t *list)
{
    listint_t *current = list;

    // Forward traversal
    while (current != NULL)
    {
        printf("%d ", current->n);
        current = current->next;
    }

    // Move to the last node
    while (current != NULL && current->next != NULL)
    {
        current = current->next;
    }

    // Backward traversal
    while (current != NULL)
    {
        printf("%d ", current->n);
        current = current->prev;
    }

    printf("\n");
}

void printList(listint_t *head)
{
    listint_t *current = head;
    while (current != NULL) {
        printf("%d ", current->n);
        current = current->next;
    }
    printf("\n");
}


int main() {
    listint_t *ptr;
    // Create some sample nodes for testing
    listint_t *node1 = malloc(sizeof(listint_t));
    listint_t *node2 = malloc(sizeof(listint_t));
    listint_t *node3 = malloc(sizeof(listint_t));
    listint_t *node4 = malloc(sizeof(listint_t)); // Additional node
    listint_t *node5 = malloc(sizeof(listint_t)); // Additional node

    // Assign values to the nodes
    node1->n = 10;
    node2->n = 20;
    node3->n = 30;
    node4->n = 40; // Additional node
    node5->n = 50; // Additional node

    // Link the nodes together
    node1->prev = NULL;
    node1->next = node2;

    node2->prev = node1;
    node2->next = node3;

    node3->prev = node2;
    node3->next = node4;

    node4->prev = node3; // Additional node
    node4->next = node5; // Additional node

    node5->prev = node4; // Additional node
    node5->next = NULL; // Additional node

    // Print the initial list
    printf("Original list: ");
    traverse_back_and_forth(node1);

    // Swap node1 and node3
    printf("\nAfter swapping node2 and node4:\n");
    ptr = swap(node1,node2, node4);
    traverse_back_and_forth(ptr);

    printf("\n---------------\n");
    // Swap node1 and node3
    printf("\nAfter swapping node1 and node4:\n");
    ptr = swap(node1, node2, node4);
    traverse_back_and_forth(ptr);

    printf("\n---------------\n");
    // Swap node1 and node3
    printf("\nAfter swapping node1 and node4:\n");
    ptr = swap(ptr, node1, node4);
    traverse_back_and_forth(ptr);

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);
    free(node4); // Additional node
    free(node5); // Additional node

    return 0;
}

