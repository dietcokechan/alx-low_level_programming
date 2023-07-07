#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: num of strings
 * @argv: pointer to strings
 *
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	if (argc < 2)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (1);
}
