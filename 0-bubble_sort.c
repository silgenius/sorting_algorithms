#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 * bubble sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 *
 * Description: This function sorts the elements of the array in place using
 * the bubble sort algorithm. The bubble sort algorithm works by
 * repeatedly stepping through the list, comparing each pair of
 * adjacent items, and swapping them if they are in the wrong
 * order. This process is repeated until the entire list is sorted.
 */
void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t temp, k, i;

	k = 1;
	temp = 0;
	swap = 1;

	while (swap != 0)
	{
		swap = 0; /* reset the value of swap
			     * after every iteration
			     */

		for (i = 0; i < (size - k); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		i = 0;
		k++;
	}
}
