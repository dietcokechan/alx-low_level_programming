#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 **/
void puts_half(char *str)
{
	int i;
	int a = 0;

	if (_strlen(str) % 2 != 0)
		a++;

	for (i = (_strlen(str) + a) / 2; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
