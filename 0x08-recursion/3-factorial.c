#include "main.h"

/**
 * factorial - returns the factorial of a given number
 *
 * @n: input number
 *
 * Return: -1 in case of error or 1 in case of success
 */
int factorial(int n)
{
	int fac;

	if (n < 0)
		return (-1);
	if (n > 0)
	{
		fac = n * factorial(n - 1);
		return (fac);
	}
	return (1);
}
