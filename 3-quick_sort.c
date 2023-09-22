#include "sort.h"
void quick_sort(int *array, size_t size)
{
	Quick_sort(array, size, 0, size - 1);
}

void Quick_sort(int *array, size_t size, int start, int end)
{
	if (start < end)
	{
		int partition_index = Partition(array, size, start, end);
		Quick_sort(array, size, start, partition_index - 1);
		Quick_sort(array, size, partition_index + 1, end);
	}
}

int Partition(int *array, size_t size, int start, int end)
{
	int pivot = array[end];
	int pIndex = start, tmp, i;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			tmp = array[i];
			array[i] = array[pIndex];
			array[pIndex] = tmp;
			pIndex++;
		}
	}
	array[end] = array[pIndex];
	array[pIndex] = pivot;
	print_array(array, size);
	return (pIndex);
}
