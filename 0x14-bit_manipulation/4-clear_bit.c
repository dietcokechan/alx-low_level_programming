#include "main.h"
#include "2-get_bit.c"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: num
 * @index: index
 *
 * Return: 1 if success -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	(*n) &= ~(1 << index);
	if (get_bit((*n), index) == 0)
		return (1);
	return (-1);
}
