#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - prints char param
 *
 * @c: list
 *
 * Return: 0
 */
int print_c(va_list c)
{
	printf("%c", va_arg(c, int));
	return (0);
}

/**
 * print_i - prints int param
 *
 * @i: list
 *
 * Return: 0
 */
int print_i(va_list i)
{
	printf("%d", va_arg(i, int));
	return (0);
}

/**
 * print_f - prints float param
 *
 * @f: list
 *
 * Return: 0
 */
int print_f(va_list f)
{
	printf("%f", va_arg(f, double));
	return (0);
}

/**
 * print_s - prints string param
 *
 * @s: list
 *
 * Return: 0
 */
int print_s(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return (0);
	}
	printf("%s", str);
	return (0);
}

/**
 * print_all - prints all
 *
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *sep1 = "";
	char *sep2 = ", ";
	va_list args;

	print_params typeArr[] = {
		{"c", print_c},
		{"i", print_i},
		{"s", print_s},
		{"f", print_f},
		{NULL, NULL}
	};

	va_start(args, format);

	i = 0;

	while (format != NULL && format[i])
	{
		j = 0;
		while (typeArr[j].f != NULL)
		{
			if (format[i] == *(typeArr[j].c))
			{
				printf("%s", sep1);
				typeArr[j].f(args);
			}
			j++;
		}
		sep1 = sep2;
		i++;
	}
	printf("\n");
	va_end(args);
}
