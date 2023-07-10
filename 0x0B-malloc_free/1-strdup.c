#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 *
 * @str: pointer to string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	int i;
	char *a;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	a = malloc(sizeof(char) * count + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		a[i] = str[i];
	}

	return (a);
}
