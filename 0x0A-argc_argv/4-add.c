#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 *
 * @argc: num of strings
 * @argv: pointer to strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, num;
	int sum = 0;
	char *c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		num = strtol(argv[i], &c, 10);

		if (*c)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
