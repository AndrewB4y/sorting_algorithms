#include "sort.h"

/**
 * quick_sort - sorting algorithm
 * @array: array to be sorted.
 * @size: size of the array.
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	rquickSort(array, 0, size - 1, size);

}

/**
 * rquickSort - algorithm of quickSort
 * @arr: arr to be sorted.
 * @low: size of the array.
 * @high: array to be sorted.
 * @size: size of the array.
 *
 * Return: void
 */

void rquickSort(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{

		pi = partition(arr, low, high, size);

		rquickSort(arr, low, pi - 1, size);
		rquickSort(arr, pi + 1, high, size);
	}
}

/**
 * partition - algorithm of lomuto
 * @arr: arr to be sorted.
 * @low: size of the array.
 * @high: array to be sorted.
 * @size: size of the array.
 *
 * Return: void
 */

int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high];
	int temp, j, i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{

		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				print_array(arr, size);
			}
		}
	}
	if (i + 1 != high)
	{
		temp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high] = temp;
		print_array(arr, size);
	}
	return (i + 1);

}
