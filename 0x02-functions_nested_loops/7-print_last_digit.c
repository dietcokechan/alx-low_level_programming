#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - print the last digit of a number
 *
 * @x: number to compare
 *
 * Return: last digit of x
 */
int print_last_digit(int x)
{
	_putchar(48 + _abs(x % 10));
	return (_abs(x % 10));
}
