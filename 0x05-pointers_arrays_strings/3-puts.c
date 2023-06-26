#include "main.h"

/**
 * _puts - returns string followed by a new line
 *
 * @str: string
 *
 * Return: returns length
 **/
void _puts(char *str)
{
	int i;

	for(i = 0; *(str + i) != '\0'; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
