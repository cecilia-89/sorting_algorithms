#include "sort.h"

/**
 * selection_sort - sorts the array in selected
 * @array: the array to sort
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min, temp;

	if (array || size > 2)
	{
		for (i = 0; i < size; i++)
		{
			min = i;

			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[min])
					min = j;
			}

			if (min != i)
			{
				temp = array[i];
				array[i] = array[min];
				array[min] = temp;
				print_array(array, size);
			}

		}
	}
}
