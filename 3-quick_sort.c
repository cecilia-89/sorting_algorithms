#include "sort.h"

/**
 * swap - swaps two elements together
 * @a: first num to swap
 * @b: second num to swap
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - sorts an array of int
 * @array: array of int
 * @start: first array index
 * @end: last array index
 * @size: size of the array
 * Return: the index of the pivot
 */

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

	return (index);
}

/**
 * quick_sort_array - sorts an array of int
 * @array: array of int
 * @start: the start of the index
 * @end: the end of the index
 * @size: size of the array
 */

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

/**
 * quick_sort - driver code
 * @array: array to sort
 * @size: the size of the array
 */

void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	quick_sort_array(array, 0, size - 1, size);
}
