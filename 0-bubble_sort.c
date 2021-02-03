#include "sort.h"

/**
 *  bubble_sort- Entry point
 *
 * @array: array gives
 * @size: size of array
 * Return: Always 0
 */
void bubble_sort(int *array, size_t size)
{

	size_t i;
	int tmp = 0;
	bool swap = true;

	while (swap == true && size > 2)
	{
		swap = false;

		for (i = 0; i < size; i++)
		{
			if (i < (size - 1) && array[i] > array[i + 1])
			{

				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				swap = true;
				print_array(array, size);
			}
		}
	}
}
