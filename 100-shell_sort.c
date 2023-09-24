#include "sort.h"
/**
 * shell_sort - implementation shell sort algorithm
 *
 * @array: input array
 * @size: size of the array
 *
 * Return: FUNCTION DO NOT RETURN
 */

void shell_sort(int *array, size_t size)
{
	size_t interval = 1;
	size_t i = 0, j = 0;

	while (interval <= size / 3)
	{
		interval = interval * 3 + 1;
	}

	while (interval > 0)
	{
		for (i = interval; i < size; i++)
		{
			int key = array[i];

			j = i;
			while (j >= interval && array[j - interval] > key)
			{
				array[j] = array[j - interval];
				j -= interval;
			}

			array[j] = key;
		}

		print_array(array, size);
		interval = (interval - 1) / 3;
	}
}
