#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: mult
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of division of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: div
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two integers
 *
 * @a: first int
 * @b: second int
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
