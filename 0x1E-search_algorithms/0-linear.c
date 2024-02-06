#include "search_algos.h"

/**
 * linear_search - searches for a value in an arrays of ints
 * @array: array
 * @size: size of array
 * @value: value to search for
 * Return: value index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return(-1);
}
