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
	unsigned int i;
	_Bool sorted = true;

	if (!array || size < 2)
		return;

	while (sorted)
	{
		sorted = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(&array[i], &array[i + 1]);
				print_array(array, size);
				sorted = true;
			}
		}
	}
}
