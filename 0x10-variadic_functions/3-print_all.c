#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_c - prints char param
 *
 * @a: list
 *
 * Return: 0
 */
int print_c(va_list a)
{
	printf("%c", va_arg(a, int));
	return (0);
}

/**
 * print_i - prints int param
 *
 * @a: list
 *
 * Return: 0
 */
int print_i(va_list a)
{
	printf("%d", va_arg(a, int));
	return (0);
}

/**
 * print_f - prints float param
 *
 * @a: list
 *
 * Return: 0
 */
int print_f(va_list a)
{
	printf("%f", va_arg(a, double));
	return (0);
}

/**
 * print_s - prints string param
 *
 * @a: list
 *
 * Return: 0
 */
int print_s(va_list a)
{
	char *str;

	str = va_arg(a, char *);
	if (str == NULL)
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
