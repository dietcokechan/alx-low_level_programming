#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	char alphabet = 'a';
	char alphabetUpper = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	while (alphabetUpper <= 'Z')
	{
		putchar(alphabetUpper);
		alphabetUpper++;
	}
	putchar('\n');
	return (0);
}
