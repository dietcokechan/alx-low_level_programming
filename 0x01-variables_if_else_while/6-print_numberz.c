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
		putchar(48 + num);
		num++;
	}
	putchar('\n');
	return (0);
}
