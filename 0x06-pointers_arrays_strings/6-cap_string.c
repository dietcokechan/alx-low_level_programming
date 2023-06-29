#include "main.h"

/**
 * check_separators - checks if separator is present
 *
 * @s: character to check
 *
 * Return: true or false
 */
int check_separators(char s)
{
	int i;
	char sepArr[13] = {' ', '\t', '\n', ',', ';',
	       	'.', '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (sepArr[i] == s)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: modified string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (check_separators(str[i]))
			continue;

		if (str[i] >= 'a' && str[i] <= 'z' &&
		 (check_separators(str[i - 1]) || i == 0))
		{
			str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
	}
	return (str);
}
