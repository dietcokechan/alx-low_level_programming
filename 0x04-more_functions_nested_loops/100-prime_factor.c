#include "main.h"

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned int i;
	unsigned long int n = 612852475143;

	for (i = 2; i < n;)
	{
		if (n % i == 0)
			n = n / i;
		else
			i++;
	}
	printf("%lu\n", n);
	return (0);
}
