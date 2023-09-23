#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	Quick_sort(array, size, 0, size - 1);
}

/**
 * Quick_sort - quick sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @start: start index
 * @end: end index
 * Return: nothing
 */

void Quick_sort(int *array, size_t size, int start, int end)
{
	if (start < end)
	{
		int partition_index = Partition(array, size, start, end);

		Quick_sort(array, size, start, partition_index - 1);
		Quick_sort(array, size, partition_index + 1, end);
	}
}

/**
 * Partition - partition algorithm
 * @array: array to be sorted
 * @size: size of the array
 * @start: start index
 * @end: end index
 * Return: nothing
 */

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
