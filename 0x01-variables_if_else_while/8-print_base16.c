#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int num = 0;
	char alphabet = 'a';

	while (num < 16)
	{
		if (num <= 9)
			putchar(48 + num);
		else
		{
			putchar(alphabet);
			alphabet++;
		}
		num++;
	}
	putchar('\n');
	return (0);
}
