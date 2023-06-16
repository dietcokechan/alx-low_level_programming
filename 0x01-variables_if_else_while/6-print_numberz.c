#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
