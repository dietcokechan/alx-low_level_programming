#include "main.h"

/**
 * _abs - compute the absolute value of an integer
 *
 * @x: number to compare
 *
 * Return: Always 0
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = (-1) * x;
	}

	return (x);
}
