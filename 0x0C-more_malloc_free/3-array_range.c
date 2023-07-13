#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: start
 * @max: end
 *
 * Return: null if fail
 */
int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);
	size = 0;
	for (i = min; i <= max; i++)
	{
		size++;
	}

	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	i = 0;

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
