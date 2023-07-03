#include "main.h"

/**
 * _strspn - gets the length of a prefic substring
 *
 * @s: string
 * @accept: accepted bytes
 *
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count ++;
				break;
			}
		}
		if (s[j] == '\0')
			return (count);
	}
	return (count);
}
