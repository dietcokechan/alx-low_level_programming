#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: type of sep
 * @n: num of params
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(p, int));
	}
	va_end(p);
	printf("\n");
}
