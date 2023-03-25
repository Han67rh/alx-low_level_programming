#include "main.h"
#include <stdio.h>

/**
 * print_line - prints lines
 * @n: the length of the line
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int length = 1;

		while (length <= n)
		{
			_putchar('_');
			length++;
		}
		_putchar('\n');
	}
}
