#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp, *prev;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	ptr = (*list)->next;

	while(ptr != NULL)
	{
		tmp = ptr;
		prev = ptr->prev;

		while (prev != NULL && prev->n > tmp->n)
		{
			if (tmp->next != NULL)
				tmp->next->prev = prev;
			prev->next = tmp->next;
			tmp->prev = prev->prev;
			
			if (prev->prev != NULL)
				prev->prev->next = tmp;
			tmp->next = prev;
			prev->prev = tmp;
			
			if (tmp->prev == NULL)
				*list = tmp;

			tmp = prev;
			prev = prev->prev;
		}

		ptr = ptr->next;
	}
}	
