#include "sort.h"

void swap(listint_t *list_a, listint_t *list_b)
{
	listint_t *tmp, *ptr, *ptr_1, *ptr_2;

	if (list_b == list_a->next)
	{
		ptr = list_a->prev->next;
		ptr_1 = list_a->prev;
		list_a->prev->next = list_b;
		ptr_2 = list_b;
		tmp = list_b->next;
		list_b->next = ptr;
		list_b->prev = ptr_1;
		list_a->next = tmp;
		list_a->prev = ptr_2;
	}
	else
	{
		if (list_a->prev = NULL)
			list_a->next = 
		ptr_1 = list_a->prev;
		list_a->prev->next = list_b;
		tmp = list_b->next;
		list_b->next = list_a->next;
		ptr_2 = list_b->prev;
		list_b->prev->next = list_a;
		list_b->prev = ptr_1;
		list_a->next = tmp;
		list_a->prev = ptr_2;
	}

}
