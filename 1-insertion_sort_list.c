#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *outer, *inner;
	listint_t *tmp = *list;
	int next_value, current_value, previous_value, temp;

	while (tmp->next)
	{
		next_value = tmp->next->n;
		current_value = tmp->n;
		previous_value = tmp->prev->n;
		if (current_value > next_value)
		{
			temp = current_value;
			tmp->next->n = temp;
			tmp->n = next_value;
		}
		else
		{
			tmp = tmp->next;
		}
	}
}
