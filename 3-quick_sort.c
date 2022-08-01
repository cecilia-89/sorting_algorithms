#include "sort.h"

/**
 * quick_sort - sorts an array of int
 * @array: array of int
 * @size: size of the array
 *
 */

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *array, int start, int end, size_t size)
{
	int index, pivot, i;
	index = start;
	pivot = array[end];

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			swap(&array[index], &array[i]);
			if (index != i)
				print_array(array, size);
			index++;
		}
	}
	swap(&array[index], &array[end]);

	if (index != i)
		print_array(array, size);

	return index;
}

void quick_sort_array(int *array, int start, int end, size_t size)
{
	int pindex;
	if (start < end)
	{
		pindex = partition(array, start, end, size);
		quick_sort_array(array, start, pindex - 1, size);
		quick_sort_array(array, pindex + 1, end, size);
	}
}

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_array(array, 0, size - 1, size);
}
