#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: a pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';

	return (dest);
}
