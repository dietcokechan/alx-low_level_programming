#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	size_t length = sizeof(str) / sizeof(str[0]);
	size_t i = 0;

	while(i < length)
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	return (0);
}
