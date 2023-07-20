#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: sep
 * @n: number of params
 *
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;
	char *sarg;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		sarg = va_arg(s, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (sarg == NULL)
			printf("(nil)");
		else
			printf("%s", sarg);
	}
	va_end(s);
	printf("\n");
}
