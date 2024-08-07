#include "search_algos.h"

/**
 * linear_search - performs a linear search for a value in an integer array
 *
 * @array: the array to search in
 * @size: the number of elements in the array
 * @value: the value to find
 * Return: EXIT_SUCCESS on success
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
