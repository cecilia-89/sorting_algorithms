#include "sort.h"

/**
 * bubble_sort - sorts an array by bubbling
 * @array: the array to bubble
 * @size: the size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	int temp;

	if (array)
	{

		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;

					print_array(array, size);
				}
			}

		}
	}
}
