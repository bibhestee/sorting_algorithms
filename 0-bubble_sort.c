#include "sort.h"

/**
 * bubble_sort - sort an array using the bubble sort algorithm
 * @array: The array.
 * @size: size of the array.
 * Description: The algorithm is to swap each adjacent elements if
 *  the first element is greater than the second, otherwise, leave
 *  them. continue the process till everything is sorted.
 *  NB: The sorting is in ascending order.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size; i++)
	{
		if (check_sort(array, size) == 1)
		{
			break;
		}
		else
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
