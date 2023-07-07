#include <stdio.h>

/**
 * main - prints the program's name
 *
 * @argc: num of strings
 * @argv: pointer to strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
