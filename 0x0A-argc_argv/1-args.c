#include <stdio.h>

/**
 * main - prints the num of args passed
 *
 * @argc: num of strings
 * @argv: pointer to strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
