#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet ten times using _putchar
 * Return: none (Success)
 */
void print_alphabet_x10(void)
{
	int times;
	char c;

	for (times = 1; times <= 10; times++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
