#include "sort.h"

/**
 * bubble_sort - bubble sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, is_sorted;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		is_sorted = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				is_sorted = 1;
				print_array(array, size);
			}
		}
		if (!is_sorted)
			return;
	}
}
