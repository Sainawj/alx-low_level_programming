#include "search_algos.h"

/**
 * _binary_search - Performs binary search for a value in a sorted integer array.
 * @array: Pointer to the initial element of the array to search in.
 * @left: The starting index of the subarray to search in.
 * @right: The ending index of the subarray to search in.
 * @value: The value to search for.
 *
 * Return: -1 if the value is not found or the array is NULL.
 *         Otherwise, the index of the located value.
 *
 * Description: Prints the current subarray being searched after each update.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search - Performs exponential search for a
 * value in a sorted integer array.
 * @array: Pointer to the initial element of the array to search in.
 * @size: Total number of elements in the array.
 * @value: The target value to search for.
 *
 * Return: -1 if the value is not found or the array is NULL.
 *         Otherwise, the index of the located value.
 *
 * Description: Prints each value as it is compared in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
