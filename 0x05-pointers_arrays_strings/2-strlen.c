#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: string
 **/
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return count;
}
