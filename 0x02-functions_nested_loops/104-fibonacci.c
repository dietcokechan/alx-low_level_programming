#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int counter = 2;
	long int x = 1;
	long int y = x + 1;
	long int z = x + y;

	printf("%ld, ", x);
	printf("%ld, ", y);

	while (counter < 98)
	{
		counter++;
		printf("%ld", z);
		x = y;
		y = z;
		z = x + y;
		if (counter < 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
