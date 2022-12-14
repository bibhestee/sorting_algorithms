#include "sort.h"

/**
 * quick_sort - sort array elements using divide-conquer rule.
 * @array: array
 * @size: size of the array.
 */

void quick_sort(int *array, size_t size)
{
	int start, end;

	start = 0;
	end = (int)(size - 1);
	if (array == NULL || size < 2)
	{
		return;
	}

	sort(array, start, end, size);
}

/**
 * sort - sort the array elements.
 * @array: array.
 * @start: array's beginning.
 * @end: array's end point.
 * @size: size of the array.
 * Description: The array elements are sorted in the
 *   ascending order using a partition function.
 */

void sort(int *array, int start, int end, size_t size)
{
	int position;/*--pivot position--*/

	if (array == NULL || start >= end)
	{
		return;
	}

	if (start < end)
	{
		if (check_sort(array, size) == 1)
		{
			return;
		}
		else
		{
			position = partition(array, start, end, size);
			/*--Sort sub arrays/partitions--*/
			sort(array, start, position - 1, size);
			sort(array, position + 1, end, size);
		}
	}
}

/**
 * partition - divide array into sub arrays
 * @array: array
 * @start: sub array lower/start boundary
 * @end: sub array upper/end boundary
 * @size: size of the array
 * Description: The array is divided into sub arrays/partitions
 *   by arranging the elements less than pivot to the left and
 *   elements greater than pivot to the right. The partition
 *   scheme used is the lomuto partition scheme.
 * Return: The pivot position
 */

int partition(int *array, int start, int end, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[end];/*--Select the end as the pivot--*/
	i = start - 1;/*--Index of smaller element--*/
	j = start;

	for (; j <= end - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
	/*--Swap the element at index i till it gets to its correct position--*/
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			if (i != j)
				print_array(array, size);
		}
	}
	/*--Swap pivot to its correct index position--*/
	if (array[end] < array[i + 1])
	{
		array[end] = array[i + 1];
		array[i + 1] = pivot;
		print_array(array, size);
	}
	return (i + 1);
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
