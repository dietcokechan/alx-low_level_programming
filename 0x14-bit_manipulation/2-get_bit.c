#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: num
 * @index: index
 *
 * Return: the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32)
		return (-1);
	return (n >> index & 1);
}
