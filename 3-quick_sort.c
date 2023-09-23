#include "sort.h"

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	Lomuto_QuickSort(array, size, 0, size - 1);
}

/**
 * Lomuto_Partition - Lomuto partition scheme for Quick sort.
 * @array: The array to be partitioned.
 * @size: The size of the array.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 *
 * Return: The index of the pivot element.
 */
int Lomuto_Partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int tmp, j;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
	}

	tmp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = tmp;
	print_array(array, size);
	return (i + 1);
}

/**
 * Lomuto_QuickSort - Lomuto Quick sort implementation.
 * @array: The array to be sorted.
 * @size: The size of the array.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 */
void Lomuto_QuickSort(int *array, size_t size, int low, int high)
{
	if (low < high)
	{
		int pivot_index = Lomuto_Partition(array, size, low, high);

		Lomuto_QuickSort(array, size, low, pivot_index - 1);
		Lomuto_QuickSort(array, size, pivot_index + 1, high);
	}
}
