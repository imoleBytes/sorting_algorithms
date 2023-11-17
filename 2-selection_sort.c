#include "sort.h"


/**
* selection_sort - Sorts a doubly linked list
* using the selection sort algorithm.
*
* @array: list of int.
* @size: lenght of list.
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, temp;

	for (i = 0; i < size - 1; i++)
	{
		size_t min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
		}
	}
}
