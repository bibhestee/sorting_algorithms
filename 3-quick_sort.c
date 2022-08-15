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

	if (array == NULL)
	{
		return;
	}

	if (start < end)
	{
		if (check_sort(array, size) == 1)
		{
			return;
		}
		position = partition(array, start, end);
		print_array(array, size);
		/*--Sort sub arrays/partitions--*/
		sort(array, start, position - 1, size);
		sort(array, position + 1, end, size);
	}
}

/**
 * partition - divide array into sub arrays
 * @array: array
 * @start: sub array lower/start boundary
 * @end: sub array upper/end boundary
 * Description: The array is divided into sub arrays/partitions
 *   by arranging the elements less than pivot to the left and
 *   elements greater than pivot to the right.
 * Return: The pivot position
 */

int partition(int *array, int start, int end)
{
	int pivot, hold, temp;

	pivot = array[start];
	hold = start;

	while (start <= end)
	{
		while (array[start] <= pivot)
		{
			start++;
		}
		while (array[end] > pivot)
		{
			end--;
		}
		if (start < end)
		{
		temp = array[end];
		array[end] = array[start];
		array[start] = temp;
		}
	}
	array[hold] = array[end];
	array[end] = pivot;
	return (end);
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
