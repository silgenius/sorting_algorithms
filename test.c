#include "sort.h"

/**
 * swap - Swaps two nodes in a doubly linked list.
 * @head: Pointer to the head of the linked list.
 * @list_a: Pointer to the first node to be swapped.
 * @list_b: Pointer to the second node to be swapped.
 *
 * Description: This function swaps the positions of two nodes in a doubly
 * linked list. It takes the head of the list and pointers to the
 * nodes to be swapped as input parameters.
 *
 * Return: Pointer to the head of the list after the swap.
 */
listint_t *swap(listint_t *head, listint_t *list_a, listint_t *list_b)
{
	listint_t *tmp;

	if (list_a == NULL || list_b == NULL || list_a == list_b)
		return head;

	if (list_a->prev != NULL)
		list_a->prev->next = list_b;
	else
		head = list_b;

	if (list_a->next != list_b)
	{
		if (list_b->prev != NULL)
			list_b->prev->next = list_a;
		else
			head = list_a;

	 	if (list_a->next != NULL)
			list_a->next->prev = list_b;
	}
	 if (list_b->next != NULL)
		 list_b->next->prev = list_a;

	 tmp = list_a->prev;
	 if (list_a->next == list_b)
		 list_a->prev = list_b;
	 else
		 list_a->prev = list_b->prev;
	 list_b->prev = tmp;
	 
	 if (list_a->next == list_b)
		 tmp = list_a;
	 else
	 	tmp = list_a->next;
	 list_a->next = list_b->next;
	 list_b->next = tmp;
	 
	 return head;
}
