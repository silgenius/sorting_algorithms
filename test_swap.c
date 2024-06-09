#include "sort.h"

/**
 * create_node - Creates a new node
 * @n: Value to store in the node
 *
 * Return: Pointer to the new node
 */
listint_t *create_node(int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return NULL;
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;
    return new_node;
}

int main(void)
{
    // Create a doubly linked list
    listint_t *head = create_node(1);
    listint_t *second = create_node(2);
    listint_t *third = create_node(3);
    listint_t *fourth = create_node(4);
    listint_t *fifth = create_node(5);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = fourth;
    fourth->prev = third;
    fourth->next = fifth;
    fifth->prev = fourth;

    printf("Original list: ");
    print_list(head);

    // Test case 1: Swap head with another node
    //head = swap(head, head, third);
    //printf("List after swapping head (1) with third node (3): ");
    //print_list(head);

    // Test case 1: Swap head with another node
    head = swap(head, fourth, fifth);
    printf("List after swapping head (1) with third node (3): ");
    print_list(head);

    // Test case 2: Swap tail with another node
    head = swap(head, third, fifth);
    printf("List after swapping third node (3) with tail (5): ");
    print_list(head);

    // Test case 3: Swap adjacent nodes
    head = swap(head, second, third);
    printf("List after swapping adjacent nodes (2 and 3): ");
    print_list(head);

    // Test case 4: Swap non-adjacent nodes
    head = swap(head, second, fourth);
    printf("List after swapping non-adjacent nodes (2 and 4): ");
    print_list(head);

    // Test case 5: Swap a node with itself
    head = swap(head, second, second);
    printf("List after attempting to swap a node with itself (2): ");
    print_list(head);

    // Free the list
    listint_t *current = head;
    listint_t *next;
    while (current)
    {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
