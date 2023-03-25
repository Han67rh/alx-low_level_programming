#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(k + 48);
					if (j != n)
						_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(k + 48);
					if (j != n)
						_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (k >= 100)
				{
					_putchar(k + 48);
					if (j != n)
						_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
		_putchar(48);
}
