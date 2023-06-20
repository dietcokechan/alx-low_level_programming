#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: number to start counting from
 */
void print_to_98(int n)
{
	int i;

	for (i = n;;)
	{

		if (i == 98)
		{
			printf("%d", i);
			break;
		}
		else
		{
			printf("%d, ", i);
		}

		if (n > 98)
			i--;
		else
			i++;
	}
	printf("\n");
}
