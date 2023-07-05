#include "main.h"

/**
 * check_num - checks if num has square root
 *
 * @x: first num
 * @y: second num
 *
 * Return: num
 */
int check_num(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check_num(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input
 *
 * Return: -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (check_num(i, n) == n && n != 1)
		return (-1);
	return (check_num(i, n));
}
