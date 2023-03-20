#include <stdio.h>
/**
 * main - prints all no.s in base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n <= 57; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}


