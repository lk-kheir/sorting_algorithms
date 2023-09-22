#include "sort.h"

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min, tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		print_array(array, size);
	}		
}
