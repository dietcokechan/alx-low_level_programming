#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: 1 if true, 0 if false
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
