#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 * @n: num of bytes
 *
 * Return: a pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	dest[j + i] = '\0';

	return (dest);
}
