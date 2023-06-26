#include "main.h"
#include "2-strlen.c"

/**
 * _strcpy - main function to copy
 *
 * @dest: destination to copy
 * @src: source of copy
 *
 * Return: returns a char value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
