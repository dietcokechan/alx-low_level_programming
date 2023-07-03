#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of diagonal
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagOne = 0;
	int diagTwo = 0;

	for (i = 0; i < size; i++)
	{
		diagOne += a[(i * size) + i];
		diagTwo += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", diagOne, diagTwo);
}
