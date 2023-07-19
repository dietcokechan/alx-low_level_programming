#include <stdio.h>
#include <stdlib.h>

/**
 * get_opcodes - print the opcode of program
 *
 * @a: address
 * @n: number of bytes
 *
 * Return:  void
 */
void get_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * @argc: number of args
 * @argv: array of args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	get_opcodes((char *)&main, n);
	return (0);
}
