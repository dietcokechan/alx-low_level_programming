#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				putchar(48 + (i / 10));
				putchar(48 + (i % 10));
				putchar(' ');
				putchar(48 + (j / 10));
				putchar(48 + (j % 10));
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
