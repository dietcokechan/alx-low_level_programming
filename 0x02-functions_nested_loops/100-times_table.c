#include "main.h"

/**
 * print_times_table - times table function
 *
 * @n: times num
 */
void print_times_table(int n)
{
	int i, j;

	if  (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = j * i;

				if (j == 0)
					_putchar(48);
				else if (result < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(48 + result);
				}
				else if (result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((result / 100) + 48);
					_putchar(((result / 10) % 10) + 48);
					_putchar((result % 10) + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((result / 10) + 48);
					_putchar((result % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
