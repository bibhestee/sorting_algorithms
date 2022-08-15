#include "sort.h"

/**
 * selection_sort - sort each array using selection sort algorithm
 * @array: array
 * @size: array size
 * Description: sorts an array of integers in ascending order using
 *   the selection sort algorithm which gets the smallest element or
 *   largest and position it in the sorted part of the array then swap
 *   the element in the original position.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k, check;
	int min;

	if (array == NULL || size < 2)
	{
		return;
	}

	/*--Check if already sorted--*/
	if (check_sort(array, size) == 1)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		check = 0;
		min = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (min > array[j])
			{
				min = array[j];
				k = j;
				check = 1;
			}
		}
		/*--Only swap if minimum != current value--*/
		if (min != array[i])
		{
			array[k] = array[i];
			array[i] = min;
			check = 1;
		}
		print_array(array, size);
		/*--Check if sorted--*/
		if (check == 0)
		{
			break;
		}
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
