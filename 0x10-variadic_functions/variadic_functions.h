#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_c(va_list c);
int print_i(va_list i);
int print_f(va_list f);
int print_s(va_list s);

/**
 * struct type - struct
 * @c: char
 * @f: function
 */
typedef struct type
{
	char *c;
	int (*f)(va_list a);
} print_params;

#endif
