#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 *
 * @x: first integer
 * @y: second integer
 *
 * Return: -1 in case of error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
