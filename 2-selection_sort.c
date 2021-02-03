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
	size_t i;
	size_t y;
	int tmp = 0;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (y = i; y < size; y++)
		{
			if (array[i] > array[y])
			{
				tmp = array[i];
				array[i] = array[y];
				array[y] = tmp;
			}
		}
		print_array(array, size);
	}
}
