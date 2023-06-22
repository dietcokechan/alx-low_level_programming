#include "main.h"

/**
 * print_most_numbers - prints number from 0 to 9 except 2 and 4
 *
 * Return: 1 if true, 0 if false
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		else
			continue;
	}
	_putchar('\n');
}
