#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *tmp;

	if (list == NULL)
		return;
	ptr = *list;
	while (ptr)
	{
		while (ptr->next && (ptr->n > ptr->next->n))
		{
			tmp = ptr->next;
			ptr->next = tmp->next;
			tmp->prev = ptr->prev;
			if (ptr->prev)
				ptr->prev->next = tmp;
			if (tmp->next)
				tmp->next->prev = ptr;
			tmp->next = ptr;
			ptr->prev = tmp;

			if (tmp->prev)
				ptr = tmp->prev;
			else
				*list = tmp;
			print_list(*list);
		}
		ptr = ptr->next;

	}
}
