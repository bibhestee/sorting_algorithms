#include "sort.h"

/**
 * shell_sort - shell sort
 * @array: array
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	int gap, i, j, temp, n;

	n = (int)size;

	for (gap = n * 3 + 1; gap >= 1; gap /= 2)
	{
		if (gap > n)
			continue;
		for (j = gap; j <= n - 1; j++)
		{
			for (i = j - gap; i >= 0; i - gap)
			{
				if (array[i + gap] > array[i])
				{
					break;
				}
				else
				{
					temp = array[i];
					array[i] = array[i + gap];
					array[i + gap] = temp;
					if ((i - gap) >= 0 && array[i - gap] > array[i])
					{
						temp = array[i];
						array[i] = array[i - gap];
						array[i - gap] = temp;
					}
				}
			}
		}
		print_array(array, size);
	}
}
