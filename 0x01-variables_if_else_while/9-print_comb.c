#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		if (num != 9)
		{
			putchar(48 + num);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(48 + num);
		}
		num++;
	}
	return (0);
}
