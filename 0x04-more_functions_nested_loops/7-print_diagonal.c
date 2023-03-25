#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: the length
 * Return: 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int length = 1;

		while (length <= n)
		{
			int spaces = 1;

			while (spaces < length)
			{
				_putchar(' ');
				spaces++;
			}
			_putchar('\\');
			_putchar('\n');
			length++;
		}
	}
}
