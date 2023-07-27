#include <stdio.h>

/**
 * print_first - constructor attrib so it's executed before main
 */
void print_first(void) __attribute__ ((constructor));

/**
 * print_first - prints before main func is executed
 */
void print_first(void)
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
			);
}
