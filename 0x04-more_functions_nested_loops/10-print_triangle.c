#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 *
 * @size: size of triangle
 *
 * Return: always 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = size - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
