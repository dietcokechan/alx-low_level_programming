#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;
	int m;

	while (num <= 8)
	{
		for(m = num + 1; m <= 9; m++)
		{
			putchar(48 + num);
			putchar(48 + m);
			if (num != 8 || m != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}
