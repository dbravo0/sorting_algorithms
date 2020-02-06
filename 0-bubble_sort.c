#include "sort.h"

/**
 * swap - Swaps the value of two pointers
 * @a: First pointer
 * @b: Second pointer
 *
 * Return: None
 **/
void swap(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: The array of numbers entered
 * @size: The size of the array
 *
 * Return: None
 **/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, f;

	for (i = 0 ; i < size - 1 ; i++)
	{
		f = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				f = 1;
			}
		}
		if (f == 0)
			break;
	}
}
