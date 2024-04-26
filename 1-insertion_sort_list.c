#include "sort.h"

void swap(listint_t *list_a, listint_t *list_b)
{
	// swap the next_ptr
	if (list_b == list_a->next)
	{
		listint_t *ptr, *tmp;
		ptr = list_a->prev->next;
		list_a->prev->next = list_b;
		tmp = list_b->next;
		list_b->next = ptr;
		list_a->next = tmp;
	}
	else
	{
		listint_t *tmp;
		list_a->prev->next = list_b;
		tmp = list_b->next;
		list_b->next = list_a->next;
		list_b->prev->next = list_a;
		list_a->next = tmp;
	}
	// swap the prev
	/* tmp = list_b->prev;
	list_b->prev = list_a->prev;
	list_a->prev = list_b; */

}
