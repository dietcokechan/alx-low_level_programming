#include "main.h"

/**
 * print_array - prints array
 *
 * @a: array
 * @n: num of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
