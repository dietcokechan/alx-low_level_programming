#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: num of params
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i, sum;

	va_start(a, n);

	if (n == 0)
		return (0);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(a, unsigned int);
	}
	va_end(a);
	return (sum);
}
