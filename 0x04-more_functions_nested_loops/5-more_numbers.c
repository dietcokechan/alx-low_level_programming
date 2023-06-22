#include "main.h"

/**
 * more_numbers - prints number from 0 to 14 ten times
 *
 * Return: 1 if true, 0 if false
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 10)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
