#include "main.h"

/**
 * check_num - checks if number is prime
 *
 * @i: integer
 * @n: input
 *
 * Return: num
 */
int check_num(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (check_num(i + 1, n));
	return (1);
}

/**
 * is_prime_number - checks if number is a prime number
 *
 * @n: input
 *
 * Return: 1 if input is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (check_num(i, n));
}
