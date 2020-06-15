#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 * @array: array to be sorted.
 * @size: size of the array.
 *
 * Return: void
 */


void selection_sort(int *array, size_t size)
{
     size_t i, j, min_idx;
     int temp; 
  
    if (size < 2 || array == NULL)
        return;
    /*One by one move boundary of unsorted subarray*/
    for (i = 0; i < size - 1; i++) 
    { 
        /*Find the minimum element in unsorted array*/
        min_idx = i; 
        for (j = i + 1; j < size; j++) 
          if (array[j] < array[min_idx]) 
            min_idx = j;
        if (i == min_idx)
            continue;  
        /*Swap the found minimum element with the first element*/
        temp = array[i];
        array[i] = array[min_idx]; 
        array[min_idx] = temp;
        print_array(array, size);
    } 
}
