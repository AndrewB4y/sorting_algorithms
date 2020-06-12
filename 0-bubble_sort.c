#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 *               using the Bubble sort algorithm.
 * @array: array of integers to be sorted
 * @size: size of the @array
 *
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
	size_t i = 0, swapped = 1, cnt = 0, s2 = size;

	while (swapped != 0)
	{
		swapped = 0;
		for (i = 1; i < s2; i++)
		{
			if (array[i - 1] > array[i])
			{
				/* Makes a swap */
				array[i - 1] = array[i - 1] ^ array[i];
				array[i] = array[i] ^ array[i - 1];
				array[i - 1] = array[i - 1] ^ array[i];
				swapped = 1;
				print_array(array, size);
				cnt = 0;
			}
			else
			{
				cnt++;
			}
		}
		s2 = s2 - 1 - cnt;
	}
}
