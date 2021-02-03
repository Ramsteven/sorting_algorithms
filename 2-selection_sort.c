#include "sort.h"

/**
 *  selection_sort- Entry point
 *
 * @array: array gives
 * @size: size of array
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, y, n;
	int tmp = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		n = i;
		for (y = i; y < size; y++)
		{
			if (array[i] > array[y])
				n = y;
		}

			if (n != i)
		{
				tmp = array[i];
				array[i] = array[n];
				array[n] = tmp;
				print_array(array, size);
		}
	}
}
