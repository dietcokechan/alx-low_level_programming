#include "main.h"

/**
 * string_nconcat - concats two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: string if pass, null if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
		n = len2;
	str = malloc(sizeof(char) * n + len1 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		str[i + len1] = s2[i];
	}
	str[i + len1] = '\0';
	return (str);
}
