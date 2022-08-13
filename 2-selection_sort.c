#include "sort.h"

/**
 * selection_sort - sort each array using selection sort algorithm
 * @array: array
 * @size: array size
 * Description: sors an array of integers in ascending order using
 *   the selection sort algorithm which gets the smallest element or
 *   largest and position it in the sorted part of the array then swap
 *   the element in the original position.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int min;

	if (check_sort(array, size) == 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				k = j;
			}
		}
		array[k] = array[i];
		array[i] = min;
		print_array(array, size);
	}
}


/**
 * check_sort - check if the array is sorted or not
 * @array: array
 * @size: size of the array
 * Return: return 1 if sorted, otherwise -1
 */

int check_sort(const int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			return (-1);
		}
	}
	return (1);
}
