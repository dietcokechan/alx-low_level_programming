#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string
 *
 * Return: return integer
 */
int _atoi (char *s)
{
	int i;
	int count;
	int dec = 1;
	int sign = 0;
	int num = 0;
	
	for (i = 0; i < _strlen(s); i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9') && count > 0)
			break;
		if (s[i] == '-')
			sign--;
		if (s[i] == '+')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
			count++;
	}

	while (count > 0)
	{
		num += ((s[i - 1] - '0') * dec);
		i--;
		count--;
		dec *= 10;
	}

	if (sign >= 0)
		num *= 1;
	else
		num *= -1;
	return (num);
}
