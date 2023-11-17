#include "sort.h"


/**
* partition - partitions a list into 2
*
* @array: The array to be printed
* @size: Number of elements in @array
* @left: staarting index
* @right: end index
* Return: a pivot (int)
*/
int partition(int *array, size_t size, int left, int right)
{
	int i = left - 1;
	int j, temp;
	int p = right;

	for (j = left; j < right; j++)
	{
		if (array[j] < array[p])
		{
			i += 1;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;


		}
	}
	temp = array[i + 1];
	array[i + 1] = array[p];
	array[p] = temp;
	print_array(array, size);

	return (i + 1);
}



/**
 * qs - the quiksort algorihtm (recursive)
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 * @left: staarting index
 * @right: end index
 */
void qs(int *array, size_t size, int left, int right)
{
	int p;

	if (left >= right)
	{
		return;
	}
	p = partition(array, size, left, right);
	qs(array, size, left, p - 1);
	qs(array, size, p + 1, right);
}



/**
 * quick_sort - main funct
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
	int left = 0;
	int right = size - 1;

	qs(array, size, left, right);
}
