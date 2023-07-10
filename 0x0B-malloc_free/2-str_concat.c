#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len1 = 0;
	int len2 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		str[i + len1] = s2[i];
	}
	str[i + len1] = '\0';
	return (str);
}
