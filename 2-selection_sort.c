#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using the
 * selection sort algorithm.
 * @array: Pointer to the array to be sorted.
 * @size: The number of elements in the array.
 *
 * Description: This function sorts the elements of the array in place using
 * the selection sort algorithm. The selection sort algorithm
 * iteratively selects the smallest element from the unsorted
 * portion of the array and swaps it with the element at the
 * beginning of the unsorted portion. This process continues until
 * the entire array is sorted. During each iteration, the index
 * of the smallest element found is stored in the variable 'tmp'.
 * If the index of the smallest element is different from the
 * current index 'i', indicating that a smaller element was found,
 * the function swaps the elements at indices 'i' and 'tmp'.
 * Additionally, it prints the array after each swap using the
 * function 'print_array'.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int swap;

	for (i = 0; i < size; i++)
	{
		tmp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[tmp])
				tmp = j;
		}

		if (i != tmp)
		{
			swap = array[i];
			array[i] = array[tmp];
			array[tmp] = swap;
			print_array(array, size);
		}
	}
}
