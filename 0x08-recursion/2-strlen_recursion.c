#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input
 *
 * Return: count
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = _strlen_recursion(s + 1);
		return (count += 1);
	}
	return (0);
}
