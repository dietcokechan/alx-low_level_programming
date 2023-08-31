#include "main.h"

/**
 * flip_bits - returns the number fo bits you need to flip
 *
 * @n: num
 * @m: target
 *
 * Return: num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int flips, count = 0;

    flips = n ^ m;
    while (flips > 0)
    {
        count += flips & 1;
        flips >>= 1;
    }
    return (count);
}